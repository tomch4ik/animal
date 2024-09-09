#include<iostream>
#include<Windows.h>
using namespace std;

class Pet
{
protected:
	char* name;
public:
	Pet() = default;
	Pet(const char* Name)
	{
		cout << "Construct Pet\n";
		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);
	}

	void Print() const
	{
		cout << "Output Pet\n";
		cout << "Name: " << name << endl;
	}

	void Input()
	{
		cout << "Enter name: ";
		char buff[20];
		cin.getline(buff, 20);
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);
	}

	~Pet()
	{
		if (name != nullptr)
		{
			delete[] name;
		}
		cout << "Destruct Pet\n";
	}
};

class Dog : public Pet 
{
	char* Breed;
	char* Color;
	int Weight;
public:
	Dog() = default;
	Dog(const char* n, const char* b, const char* c, int w) : Pet(n)
	{
		cout << "Construct Dog\n";
		Breed = new char[strlen(b) + 1];
		strcpy_s(Breed, strlen(b) + 1, b);
		Color = new char[strlen(c) + 1];
		strcpy_s(Color, strlen(c) + 1, c);
		Weight = w;
	}

	~Dog()
	{
		delete[] Breed;
		delete[] Color;
		cout << "Destruct Dog\n";
	}

	void Print() 
	{
		cout << "Output Dog\n";
		Pet::Print();
		cout << "Dog breed: " << Breed << endl;
		cout << "Dog color: " << Color << endl;
		cout << "Dog weight: " << Weight << endl;
	}
	void Input(const char* b, const char* c, int w)
	{
		delete[] Breed;
		delete[] Color;
		Breed = new char[strlen(b) + 1];
		strcpy_s(Breed, strlen(b) + 1, b);
		Color = new char[strlen(c) + 1];
		strcpy_s(Color, strlen(c) + 1, c);
		Weight = w;
		Pet::Input();
	}
};

class Cat : public Pet
{
	char* Breed;
	char* Color;
	char* Wool_length;
public:
	Cat() = default;
	Cat(const char* n, const char* b, const char* c, const char* w) : Pet(n)
	{
		cout << "Construct Cat\n";
		Breed = new char[strlen(b) + 1];
		strcpy_s(Breed, strlen(b) + 1, b);
		Color = new char[strlen(c) + 1];
		strcpy_s(Color, strlen(c) + 1, c);
		Wool_length = new char[strlen(w) + 1];
		strcpy_s(Wool_length, strlen(w) + 1, w);
	}

	~Cat()
	{
		delete[] Breed;
		delete[] Color;
		delete[] Wool_length;
		cout << "Destruct Cat\n";
	}

	void Print()
	{
		cout << "Output Cat\n";
		Pet::Print();
		cout << "Cat breed: " << Breed << endl;
		cout << "Cat color: " << Color << endl;
		cout << "Cat wool length: " << Wool_length << endl;
	}
	void Input(const char* b, const char* c, const char* w)
	{
		delete[] Breed;
		delete[] Color;
		delete[] Wool_length;
		Breed = new char[strlen(b) + 1];
		strcpy_s(Breed, strlen(b) + 1, b);
		Color = new char[strlen(c) + 1];
		strcpy_s(Color, strlen(c) + 1, c);
		Wool_length = new char[strlen(w) + 1];
		strcpy_s(Wool_length, strlen(w) + 1, w);
		Pet::Input();
	}
};

class Parrot : public Pet
{
	char* Breed;
	char* Color_of_feathers;
	char* Size_Parrot;
public:
	Parrot() = default;
	Parrot(const char* n, const char* b, const char* c, const char* s) : Pet(n)
	{
		cout << "Construct Parrot\n";
		Breed = new char[strlen(b) + 1];
		strcpy_s(Breed, strlen(b) + 1, b);
		Color_of_feathers = new char[strlen(c) + 1];
		strcpy_s(Color_of_feathers, strlen(c) + 1, c);
		Size_Parrot = new char[strlen(s) + 1];
		strcpy_s(Size_Parrot, strlen(s) + 1, s);
	}

	~Parrot()
	{
		delete[] Breed;
		delete[] Color_of_feathers;
		delete[] Size_Parrot;
		cout << "Destruct Parrot\n";
	}

	void Print()
	{
		cout << "Output Parrot\n";
		Pet::Print();
		cout << "Parrot breed: " << Breed << endl;
		cout << "Parrot color of feathers: " << Color_of_feathers << endl;
		cout << "Parrot size: " << Size_Parrot << endl;
	}
	void Input(const char* b, const char* c, const char* s)
	{
		delete[] Breed;
		delete[] Color_of_feathers;
		delete[] Size_Parrot;
		Breed = new char[strlen(b) + 1];
		strcpy_s(Breed, strlen(b) + 1, b);
		Color_of_feathers = new char[strlen(c) + 1];
		strcpy_s(Color_of_feathers, strlen(c) + 1, c);
		Size_Parrot = new char[strlen(s) + 1];
		strcpy_s(Size_Parrot, strlen(s) + 1, s);
		Pet::Input();
	}
};

int main()
{
	Dog d1("Dekster", "buldog", "brown", 25);
	d1.Print();

	Cat c1("Murka", "persian cat", "grey", "short");
	c1.Print();

	Parrot p1("Karl", "kakadu", "white", "length 30cm and width 10 cm");
	d1.Print();

	system("pause");
}