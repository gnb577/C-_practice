class MP3 {
public:
	void play();
	void stop();
};

class MobilePhone {
public:
	bool sendCall();
	bool receiveCall();
	bool sendSMS();
	bool receiveSMS();
};

class MusicPhone : public MP3, public MobilePhone { // 다중 상속 선언
public:
	void dial();
};
void MusicPhone::dial() {
	play(); 			// mp3 음악을 연주시키고
	sendCall(); 	// 전화를 건다.
}

int main() {
	MusicPhone hanPhone;
	hanPhone.play(); 		// MP3의 멤버 play() 호출
	hanPhone.sendSMS(); // MobilePhone의 멤버 sendSMS() 호출
}
