#include <QtNetwork>

MainWindow::~MainWindow()
{
    delete spriteReply;
    delete pokemonReply;
    delete ui;
}

void MainWindow::getPokemon(int id) {
    pokemonReply = qnam.get(QNetworkRequest(QUrl("https://pokeapi.co/api/v2/pokemon/" + QString::number(id))));
    connect(pokemonReply, SIGNAL(finished()), this, SLOT(managePokemonReply()));
}

void MainWindow::managePokemonReply()
{
    QString source = pokemonReply->readAll();
    QJsonObject pokeData;
    QJsonDocument doc = QJsonDocument::fromJson(source.toUtf8());
    if(!doc.isNull()) {
        if(doc.isObject()) {
            pokeData = doc.object();
            // Pokemon's Name
			
            // Pokemon's Image
			
            // Pokemon's Type
            
        }
        else {
            qDebug() << "Document is not an object" << endl;
        }
    }
    else {
        qDebug() << "Invalid JSON...\n" << source << endl;
    }
}

