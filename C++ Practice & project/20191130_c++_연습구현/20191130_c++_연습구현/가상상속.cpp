/*
			기본
파생					파생
		다중상속

		이 경우 기본 클래스가 공유되어 기본클래스의 변수나 함수가 공규된다
		따라서 이를 방지하기 위한 가상상속이 존재함


class Person {
public:
  int id;
};

class Student : public Person {  };
(상속 class앞에 virtual을 적어줌,
 (class Student : virtual public Person))

class Worker : public Person {  };
(class Worker : virtual public Person)

class StudentWorker : public Student, public Worker {
public:
  void getId()  { return id; }
};

*/