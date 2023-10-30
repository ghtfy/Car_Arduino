import cv2
import numpy as np

cap = cv2.VideoCapture(0)  # 카메라 모듈 사용.

while True:
    ret, frame = cap.read()  # 카메라 모듈 연속 프레임 읽기

    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)  # BGR을 HSV로 변환

    # 넓게 설정한 초록색 범위
    lower_green = np.array([40, 100, 40])
    upper_green = np.array([90, 255, 255])

    # 넓게 설정한 빨강색 범위
    lower_red1 = np.array([0, 100, 100])
    upper_red1 = np.array([10, 255, 255])
    lower_red2 = np.array([160, 100, 100])
    upper_red2 = np.array([180, 255, 255])

    # 넓게 설정한 노란색 범위
    lower_yellow = np.array([20, 100, 100])
    upper_yellow = np.array([30, 255, 255])

    # Threshold the HSV image to get colors
    mask_green = cv2.inRange(hsv, lower_green, upper_green)
    mask_red1 = cv2.inRange(hsv, lower_red1, upper_red1)
    mask_red2 = cv2.inRange(hsv, lower_red2, upper_red2)
    mask_red = mask_red1 + mask_red2  # 빨간색 범위 합치기
    mask_yellow = cv2.inRange(hsv, lower_yellow, upper_yellow)

    # Bitwise-AND mask and original image
    res_green = cv2.bitwise_and(frame, frame, mask=mask_green)
    res_red = cv2.bitwise_and(frame, frame, mask=mask_red)
    res_yellow = cv2.bitwise_and(frame, frame, mask=mask_yellow)

    # 빨간색, 초록색, 노란색 표시
    result = cv2.addWeighted(res_red, 1, res_green, 1, 0)
    result = cv2.addWeighted(result, 1, res_yellow, 1, 0)

    # 색상 감지 후 메시지 표시
    font = cv2.FONT_HERSHEY_SIMPLEX
    if np.sum(mask_red) > 10000:
        cv2.putText(result, 'STOP', (10, 50), font, 2, (0, 0, 255), 2, cv2.LINE_AA)
    elif np.sum(mask_yellow) > 10000:
        cv2.putText(result, 'SLOW', (10, 50), font, 2, (0, 255, 255), 2, cv2.LINE_AA)
    elif np.sum(mask_green) > 10000:
        cv2.putText(result, 'GO', (10, 50), font, 2, (0, 255, 0), 2, cv2.LINE_AA)

    cv2.imshow('frame', frame)  # 원본 영상을 보여줌
    cv2.imshow('Traffic Lights', result)  # 빨간색, 초록색, 노란색 및 메시지를 표시

    k = cv2.waitKey(5) & 0xFF
    if k == 27:
        break

cap.release()
cv2.destroyAllWindows()

