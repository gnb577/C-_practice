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

class MusicPhone : public MP3, public MobilePhone { // ���� ��� ����
public:
	void dial();
};
void MusicPhone::dial() {
	play(); 			// mp3 ������ ���ֽ�Ű��
	sendCall(); 	// ��ȭ�� �Ǵ�.
}

int main() {
	MusicPhone hanPhone;
	hanPhone.play(); 		// MP3�� ��� play() ȣ��
	hanPhone.sendSMS(); // MobilePhone�� ��� sendSMS() ȣ��
}
