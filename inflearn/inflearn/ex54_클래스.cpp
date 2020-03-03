/*
class와 struct의 차이점은?

c에서 c++로 넘어가면서 객체지향 패러다임이 본격적으로 시작된다.

class: 특정한 목적을 수행하기 위한 변수와 함수를 모아 둔 틀
*/

#include <iostream>

// encalsuation
// public, private, protected, 

class TV {

	// class에서는 선언된 변수 및 매서드는 기본적으로 private
	bool powerOn = false;
	int channel;
	int volume;
		
public:
	void pushPowerBtn() {
		powerOn = !powerOn;

		if (powerOn) {
			std::cout << "TV를 켰습니다." << std::endl;
		}
		else {
			std::cout << "TV를 껐습니다." << std::endl;
		}
		
	}

	void setChannel(int cnl) {
		if (cnl >= 0 && cnl < 1000) {
			channel = cnl;
			std::cout << "채널을 " << channel << "(으)로 바꿨습니다." << std::endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			std::cout << "볼륨을 " << volume << "(으)로 바꿨습니다." << std::endl;
		}
	}
};

int main() {

	TV lg;
	lg.pushPowerBtn();
	lg.pushPowerBtn();
	lg.setChannel(10);
	lg.setVolume(50);


	return 0;
}

