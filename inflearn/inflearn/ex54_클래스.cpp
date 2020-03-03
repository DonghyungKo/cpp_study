/*
class�� struct�� ��������?

c���� c++�� �Ѿ�鼭 ��ü���� �з������� ���������� ���۵ȴ�.

class: Ư���� ������ �����ϱ� ���� ������ �Լ��� ��� �� Ʋ
*/

#include <iostream>

// encalsuation
// public, private, protected, 

class TV {

	// class������ ����� ���� �� �ż���� �⺻������ private
	bool powerOn = false;
	int channel;
	int volume;
		
public:
	void pushPowerBtn() {
		powerOn = !powerOn;

		if (powerOn) {
			std::cout << "TV�� �׽��ϴ�." << std::endl;
		}
		else {
			std::cout << "TV�� �����ϴ�." << std::endl;
		}
		
	}

	void setChannel(int cnl) {
		if (cnl >= 0 && cnl < 1000) {
			channel = cnl;
			std::cout << "ä���� " << channel << "(��)�� �ٲ���ϴ�." << std::endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			std::cout << "������ " << volume << "(��)�� �ٲ���ϴ�." << std::endl;
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

