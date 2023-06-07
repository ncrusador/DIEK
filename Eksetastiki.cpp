#include <iostream>

using namespace std;

class Person {
	protected:
		int hlikia;
		string onoma;
	public:
		void set_hlikia(int x) {
			hlikia = x;
		}
		int get_hlikia() {
			return hlikia;
		}
		void set_onoma(string x) {
			onoma = x;
		}
		string get_onoma() {
			return onoma;
		}
		Person() {
			hlikia = 0;
			onoma = "";
		}
		Person(int a, string b) {
			hlikia = a;
			onoma = b;
		}
};

class Teacher: public Person {
	protected:
		bool metaptuxiako;
		float misthos;
	public:
		void set_misthos(float x) {
			misthos = x;
		}
		float get_misthos() {
			return misthos;
		}
		void set_metaptuxiako(bool x) {
			metaptuxiako = x;
		}
		bool get_metaptuxiako() {
			return metaptuxiako;
		}
		float telikos_misthos() {
			if (metaptuxiako) return misthos+250;
			else return misthos;
		}
		void print_teacher() {
			cout<<"\nKathigitis: "<<onoma;
			cout<<"\nHlikia: "<<hlikia;
			cout<<"\nMisthos: "<<misthos;
			if(metaptuxiako) cout<<"\nMetaptuxiako: Nai";
			else cout<<"\nMetaptuxiako: Oxi";
			cout<<"\nTelikos misthos: "<<telikos_misthos()<<endl;
		}
		Teacher() {
			hlikia = 0;
			onoma = "";
			misthos = 0;
			metaptuxiako = 0;
		}
		Teacher(int a, string b, float c, bool d) {
			hlikia = a;
			onoma = b;
			misthos = c;
			metaptuxiako = d;
		}
};

class Student: public Person {
	protected:
		float vathmos;
		string eidikothta;
	public:
		void set_vathmos(float x) {
			vathmos = x;
		}
		float get_vathmos() {
			return vathmos;
		}
		void set_eidikothta(string x) {
			eidikothta = x;
		}
		string get_eidikothta() {
			return eidikothta;
		}
		void print_student() {
			cout<<"\nMathitis: "<<onoma;
			cout<<"\nHlikia: "<<hlikia;
			cout<<"\nVathmos: "<<vathmos;
			cout<<"\nEidikothta: "<<eidikothta<<endl;
		}
		Student() {
			hlikia = 0;
			onoma = "";
			vathmos = 0;
			eidikothta = "";
		}
		Student(int a, string b, float c, string d) {
			hlikia = a;
			onoma = b;
			vathmos = c;
			eidikothta = d;
		}
};

class Spoudastis: public Student {
	protected:
		float ergasia;
	public:
		void set_ergasia(float x) {
			ergasia = x;
		}
		float get_ergasia() {
			return ergasia;
		}
		float get_telikos_vathmos() {
			return ergasia*0.1 + vathmos*0.9;
		}
		void print_student() {
			cout<<"\nMathitis: "<<onoma;
			cout<<"\nHlikia: "<<hlikia;
			cout<<"\nVathmos: "<<vathmos;
			cout<<"\nEidikothta: "<<eidikothta;
			cout<<"\nErgasia: "<<ergasia;
			cout<<"\nTelikos vathmos: "<<get_telikos_vathmos();
		}
		Spoudastis() {
			hlikia = 0;
			onoma = "";
			vathmos = 0;
			eidikothta = "";
			ergasia = 0;
		}
		Spoudastis(int a, string b, float c, string d, float e) {
			hlikia = a;
			onoma = b;
			vathmos = c;
			eidikothta = d;
			ergasia = e;
		}
};

int main() {
	
	Teacher Tsikerdis(42, "Tsikerdis", 950, 1);
	Tsikerdis.print_teacher();
	
	Spoudastis Sarikas(30, "Sarikas", 9, "TEP B", 10);
	Sarikas.print_student();
	
	return 0;
}

////
