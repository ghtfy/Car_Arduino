<div align="center">

#  Arduino & Raspberry Pi 기반 자율주행 자동차 프로젝트

본 프로젝트는 Arduino와 Raspberry Pi를 활용하여 자율주행 자동차를 설계하고 구현한 프로젝트입니다.

<img src="https://img.shields.io/badge/Project-AutonomousCar-blue?style=flat-square">
<img src="https://img.shields.io/badge/Language-Python-306998?style=flat-square&logo=python&logoColor=white">
<img src="https://img.shields.io/badge/Framework-OpenCV-green?style=flat-square">

</div>


## 📝 프로젝트 개요
라즈베리파이와 아두이노를 활용하여 자율주행 자동차를 설계하고 구현한 프로젝트입니다.  
OpenCV 기반 영상처리,모터 제어, 그리고 센서 데이터를 활용하여 차선 인식, 장애물 감지, 신호등 및 표지판 인식과 같은 기능을 구현하였습니다.

---

##  주요 기능

<details>
<summary><b>1. 차선 인식 (클릭하여 보기)</b></summary>
<br>
<p align="center">
  <b>Canny 엣지 검출 및 Hough 변환을 이용하여 실시간으로 차선을 추적합니다.</b><br><br>
  <img src="https://github.com/user-attachments/assets/7bcd63fa-2444-4479-b0d6-171c1964af69" width="600px">
</p>
</details>

<details>
<summary><b>2. 장애물 감지 (클릭하여 보기)</b></summary>
<br>
<p align="center">
  <b>HOG 디스크립터로 보행자를 검출하고 안전 거리를 확보하여 차량을 정지시킵니다.</b><br><br>
  <img src="https://github.com/user-attachments/assets/c95f9097-dac2-4483-9b0b-38b2249ed47f" width="600px">
</p>
</details>

<details>
<summary><b>3. 신호등 인식 (클릭하여 보기)</b></summary>
<br>
<p align="center">
  <b>HSV 색상 공간에서 특정 색상(빨간색, 노란색, 초록색)을 인식하여 신호를 판별합니다.</b><br><br>
  <img src="https://github.com/user-attachments/assets/f71c3209-829e-4fd7-bd42-1091abe8b140" width="600px">
</p>
</details>

<details>
<summary><b>4. 표지판 인식 (클릭하여 보기)</b></summary>
<br>
<p align="center">
  <b>경계선 검출 및 형태 분석 알고리즘을 통해 교통 표지판을 실시간으로 감지합니다.</b><br><br>
  <img src="https://github.com/user-attachments/assets/4c2cd393-57e0-45a8-87f1-884b9316595b" width="600px">
</p>
</details>

---

##  라즈베리파이를 다루며 어려웠던 점

### 1. 라즈베리파이 환경 내 OpenCV 설치 및 호환성 이슈
- **문제**: 라즈베리파이 OS 버전과 OpenCV 라이브러리 간의 의존성 충돌로 인해 빌드 오류 및 카메라 연동 실패가 반복됨.
- **해결**: 다양한 버전의 라이브러리를 테스트한 결과, 가상 환경(venv) 내에서 특정 안정 버전을 설치하고 필요한 종속성 패키지를 수동으로 설정하여 카메라 연동에 성공함.

<p align="center">
  <img src="https://github.com/user-attachments/assets/605d2910-98e9-45cf-bded-22fa79f9605e" width="600px">
  <br><em>[OpenCV 카메라 연동 및 초기 환경 설정 화면]</em>
</p>

### 2. VPN 원격 제어 및 전력 관리 이슈
- **문제**: 외부 네트워크 환경(VPN)에서 실시간 제어 시 통신 지연이 발생하였으며, 모터와 라즈베리파이를 동시에 구동할 때 배터리 소모 및 전력 부족으로 시스템이 셧다운됨.
- **해결**: 패킷 전송 주기를 최적화하여 지연을 줄였으며, 보조 배터리와 전원 분리 회로를 구성하여 안정적인 전력 공급 환경을 구축함.

<p align="center">
  <img src="https://github.com/user-attachments/assets/d0f4a4bf-acc0-47fc-b752-f7dee7c1b1b2" width="600px">
  <br><em>[VPN을 활용한 원격 모니터링 및 제어 테스트]</em>
</p>

---

##  시스템 작동 플로우차트

<details>
<summary><b>알고리즘 플로우차트 (클릭하여 펼치기)</b></summary>
<br>
<p align="center">
  <b>데이터 수집부터 제어 명령 하달까지의 전체 로직 흐름도입니다.</b><br><br>
  <img src="https://github.com/user-attachments/assets/45e8f7c6-bf60-4125-a2c3-3d6cd691f43f" width="800px">
</p>
</details>

---

##  자세한 정보
프로젝트의 상세한 설명과 부품 목록, 사용 방법 등은 다음 문서에서 확인하세요:
- **[구성 부품 및 사용 설명서](./docs/HardwareDetails.md)**
- **[코드 구조 및 주요 알고리즘](./docs/CodeStructure.md)**
- **[실행 가이드](./docs/InstallationGuide.md)**

---

## 🔗 참고 자료
- **아두이노 자료**: [Hackster.io](https://www.hackster.io/)
- **OpenCV 설치 가이드**: [QEngineering](https://qengineering.eu/install-opencv-on-raspberry-pi.html)
- **학술 논문 자료**: [RISS](https://www.riss.kr/index.do)

---

##  개선점 및 향후 과제

이번 프로젝트는 팀원들과의 소통 및 자체 자료 조사를 통해 개발되었습니다. 진행 과정에서 느낀 기술적 한계와 개선 방향은 다음과 같습니다.

* **영상처리의 이론적 기초 강화**: 외부 자료에 의존한 구현 위주의 학습으로 인해 알고리즘 원리 이해에 한계를 느꼈습니다. 향후 전공 지식 습득을 통해 영상 처리 알고리즘의 최적화 원리를 깊이 있게 연구할 계획입니다.
* **코드 최적화 및 경량화**: 라즈베리파이의 한정된 리소스에서 발생하는 성능 병목 현상을 경험하며, 하드웨어 성능을 고려한 효율적인 코드 작성 및 자원 관리의 중요성을 체감하였습니다.
* **데이터 기반의 문서화**: 체계적인 테스트 기록 및 문서화 부족으로 인해 오류 피드백과 개선 속도에 한계가 있었습니다. 차후 프로젝트에서는 모든 구현 및 수정 과정을 문서화하여 개발 효율성을 높이고자 합니다.
* **주행 중 자동차의 안정성 문제**;: 완성형 키트가 아닌 목적에 맞게 아두이노 부품을 개량하여 제작함으로 인해 주행 중 카메라 거치 문제, 차체 무게 조정 등 문제가 발생 
* **팀원과의 긴밀한 소통 필요**; : 소통의 부재는 프로젝트의 완성도에 크게 영향을 끼치므로 주기적 소통으로 오류를 줄어가야 합니다.
