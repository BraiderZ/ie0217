#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "MaterialAudiovisual.hpp"
#include <iostream>
#include <string>
using namespace std;
/**
 * @file Podcast.hpp
 * 
 * @brief Prototipo para la clase podcast.
 * 
 * 
 * @license 
 * Copyright 2024 [Luis José Brenes Campos]
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

class Podcast : public MaterialAudiovisual {
    public:
        Podcast(string titulo, string autor, string genero, string estado, int duracion, int precio);
        void imprimirInformacion() override;
        void tamano() override;
        virtual ~Podcast();
    protected:
        //Nuevos atributos
        string resumen;
        string material_relacionado;

};

#endif 