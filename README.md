# 🚗 Arduino & Raspberry Pi 기반 자율주행 자동차 프로젝트

## 📒 프로젝트 개요
이 프로젝트는 라즈베리파이와 아두이노를 활용하여 저비용 자율주행 자동차를 설계하고 구현한 프로젝트입니다. OpenCV 기반 영상처리, 모터 제어, 그리고 센서 데이터를 활용하여 차선 인식, 장애물 감지, 신호등 및 표지판 인식과 같은 자율주행 핵심 기능을 구현하였습니다.

---

## 📂 주요 기능
1. **차선 인식**: Canny 엣지 검출 및 Hough 변환을 이용하여 차선을 추적.
2. **장애물 감지**: HOG 디스크립터로 보행자를 검출하고 차량을 정지.
3. **신호등 인식**: HSV 색상 공간에서 특정 색상(빨간색, 노란색, 초록색) 인식.
4. **표지판 인식**: 경계선 및 형태 분석으로 표지판 감지.

---

## 📌 빠른 실행 가이드
1. **하드웨어 연결**: 라즈베리파이, 아두이노, 모터 드라이버, 카메라 등을 연결합니다.
2. **소프트웨어 설치**: Python 라이브러리(OpenCV 등) 및 Arduino IDE를 설치합니다.
3. **코드 실행**: 라즈베리파이에서 메인 스크립트를 실행하여 시스템을 시작합니다.

---

## 📖 자세한 정보
프로젝트의 상세한 설명과 부품 목록, 사용 방법 등은 다음 문서에서 확인하세요:
- **[구성 부품 및 사용 설명서](./docs/HardwareDetails.md)**
- **[코드 구조 및 실행 방법](./docs/CodeStructure.md)**
- **[설치 및 실행 가이드](./docs/InstallationGuide.md)**
- **[참고 자료](./docs/References.md)**

---

## 📚 참고 자료
- **아두이노 자료**: [Hackster.io](https://www.hackster.io/)
- **OpenCV 설치 가이드**: [QEngineering](https://qengineering.eu/install-opencv-on-raspberry-pi.html)
- **학술 논문 자료**: [RISS](https://www.riss.kr/index.do)

---

### 🤝 기여 방법
프로젝트에 기여하고 싶으시면 [CONTRIBUTING.md](./CONTRIBUTING.md)를 참조해주세요.
