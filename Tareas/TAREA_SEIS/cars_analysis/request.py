from kaggle.api.kaggle_api_extended import KaggleApi


def obtenerDatos():
    api = KaggleApi()
    api.authenticate()

    dataset_name = "akshaydattatraykhare/car-details-dataset"
    api.dataset_download_files(dataset_name, path="./cars_analysis", unzip=True)