#include <bits/stdc++.h>
using namespace std;

class CEmpleado{
	private:
		string nombre;
		int anio;
		float salario;
		string direc;
	
	public:
		CEmpleado(string name, int ai,float s,string d);
		string SetN(string name);
		int SetA(int ai);
		float Sets(float s);
		string SetD(string d);
		bool DirrecW(string d);
};

CEmpleado::CEmpleado(string name, int ai,float s,string d){
	nombre = SetN(name);
	anio = SetA(ai);
	salario = Sets(s);
	direc = SetD( d);
};

string CEmpleado::SetN(string name){
	nombre = name;
	return nombre;
}

int CEmpleado::SetA(int ai){
	anio = ai;
	return anio;
}

float CEmpleado::Sets(float s){
	salario = s;
	return salario;
}

string CEmpleado::SetD(string d){
	direc = d;
	return direc;
}

bool DirrecW(string d){
	string a ="WallStreet";
	bool flag = false;
	
	if(size_t found = d.find(a)){
		flag = true;
	}
	return flag;
}

int main(){
	int ai;
	string n , d = "64c wallstreet";
	float s = 12;
	
	cout<<"Nombre:  ";
	getline(cin,n);
	cout<<"Año de ingreso:  ";
	cin>>ai;
	bool vof= DirrecW(d);
	

	CEmpleado Empleado(n, ai, s, d);
	
	cout<<"Nombre de Empleado: "<<Empleado.SetN(n)<<endl;
	cout<<"Año de ingreso: "<<Empleado.SetA(ai)<<endl;
	cout<<"Salario: "<<Empleado.Sets(s)<<endl;
		if (vof == true){
		cout<<"vive en WallStreet"<<endl;
	}
	else{
		cout<<"no vive en WallStreet"<<endl;
	}
	
	return 0;
}
