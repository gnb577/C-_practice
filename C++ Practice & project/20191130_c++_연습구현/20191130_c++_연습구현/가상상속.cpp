/*
			�⺻
�Ļ�					�Ļ�
		���߻��

		�� ��� �⺻ Ŭ������ �����Ǿ� �⺻Ŭ������ ������ �Լ��� ���Եȴ�
		���� �̸� �����ϱ� ���� �������� ������


class Person {
public:
  int id;
};

class Student : public Person {  };
(��� class�տ� virtual�� ������,
 (class Student : virtual public Person))

class Worker : public Person {  };
(class Worker : virtual public Person)

class StudentWorker : public Student, public Worker {
public:
  void getId()  { return id; }
};

*/