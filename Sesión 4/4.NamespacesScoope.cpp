#include <iostream>

namespace MiEmpresa {
	namespace ProyectoA{
		void funcionA() {
			std::cout << "Proyecto A" << std::endl;
		}
	}
	namespace ProyectoB{
		void funcionB() {
			std::cout << "Proyecto B" << std::endl;
		}
	}	
}

//namespace ProjA = MiEmpresa::ProyectoA;
//namespace ProjB = MiEmpresa::ProyectoB;

int main(){
	using namespace MiEmpresa::ProyectoA;
	using namespace MiEmpresa::ProyectoB;
	
	setlocale(LC_CTYPE, "Spanish");	
	//MiEmpresa::ProyectoA::funcionA();
	//MiEmpresa::ProyectoB::funcionB();
	
	//ProjA::funcionA();
	//ProjB::funcionB();
	
	funcionA();
	funcionB();
	
	
	return 0;
}

