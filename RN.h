#ifndef ARBOLRN_H
#define ARBOLRN_H

#include <map>
#include "song.h"

class ArbolRN{
  public:
    ArbolRN() = default;
    ~ArbolRN() = default;
    std::map<std::string, Song>& getArbolRN(); //Ref. al arbol
    void insert(Song& song);
    void remove(std::string id);
    Song* void search(std::string id);
    std::map<std::string, Song> arbolRN; //mapa actua como arbol almacenamiento
}
