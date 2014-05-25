#include <fstream>

#include "Image2D.h"

void Image2D::ReadImagePGM(std::string filename){
  std::ifstream archivo;
  char cabecera[100];   
  archivo.open(filename,std::fstream::binary);   
  int i;
  if(!archivo) return;
  //Quito la cabecera
  for(i=0; i<2; i++){
	archivo.getline(cabecera,100);
  }
	if(archivo.bad() || archivo.fail()) return;
	//Almaceno las dimensiones de la imagen
	archivo>>height>>width;
	//descarto la cabecera restante
	archivo.getline(cabecera,100);
	if(archivo.bad() || archivo.fail()) return;
	archivo.getline(cabecera,100);
	if(archivo.bad() || archivo.fail()) return;
	//Inicializo el vector que contendra la imagen
	
	//Cargo la imagen
	//archivo.read((char*)this->data,(nc*nr));
	if(archivo.bad() || archivo.fail()) return;
  //cierro el archivo
	archivo.close();
	
}

Image2D::Image2D(std::string filename){
	this->ReadImagePGM(filename);
}
