from kaggle.api.kaggle_api_extended import KaggleApi
"""
request.py

Función encargada de obtener los datos de la web.


@license:
Copyright 2024 [Luis José Brenes Campos]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""


def obtenerDatos():
    """
    Crea una instancia de KaggleApi
    Auntentifica la obtanción de datos por medio de un Api
    Descarga los datos
    """
    api = KaggleApi()
    api.authenticate()

    dataset_name = "akshaydattatraykhare/car-details-dataset"
    api.dataset_download_files(dataset_name, path="./cars_analysis", unzip=True)
