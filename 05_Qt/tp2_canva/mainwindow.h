#include <QtNetwork>

class MainWindow : public QMainWindow
{
private slots:
    void managePokemonReply();
private:
    QNetworkAccessManager qnam;
    QNetworkReply *pokemonReply;
};
