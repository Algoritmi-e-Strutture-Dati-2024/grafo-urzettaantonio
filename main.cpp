int main() {

    // Creazione del grafo
    Grafo<int> grafo;

    // Aggiunta dei nodi (Nomi delle persone)
    grafo.aggiungiNodo(Giada);
    grafo.aggiungiNodo(Luca);
    grafo.aggiungiNodo(Giovanni);
    grafo.aggiungiNodo(Marco);
    grafo.aggiungiNodo(Valerio);

    // Aggiunta degli archi con i pesi delle amicizie 
    grafo.aggiungiArco(Giada, Luca, 50);
    grafo.aggiungiArco(Luca, Giovanni, 150);
    grafo.aggiungiArco(Giovanni, Giada, 60);
    grafo.aggiungiArco(Giada, Marco, 120);
    grafo.aggiungiArco(Marco, Valerio, 70);
    grafo.aggiungiArco(Valerio , Giovanni, 200);

    // Stampa della matrice di adiacenza del grafo
    grafo.stampa();

    // Verifica se un nodo esiste
if (grafo.verificaNodo(Giovanni)) {
    std::cout << "Esiste il nodo Giovanni? Sì" << std::endl;
} else {
    std::cout << "Esiste il nodo Giovanni? No" << std::endl;
}

if (grafo.verificaNodo(Antonio)) {
    std::cout << "Esiste il nodo Antonio? Sì" << std::endl;
} else {
    std::cout << "Esiste il nodo Antonio? No" << std::endl;
}

    // Verifica se un arco esiste
if (grafo.verificaArco(Giada, Luca)) {
    std::cout << "Esiste un arco tra Giada e Luca? Sì" << std::endl;
} else {
    std::cout << "Esiste un arco tra Giada e Luca? No" << std::endl;
}

if (grafo.verificaArco(Giovanni, Valerio)) {
    std::cout << "Esiste un arco tra Giovanni e Valerio? Sì" << std::endl;
} else {
    std::cout << "Esiste un arco tra Giovanni e Valerio? No" << std::endl;
}


    // Visualizza i nodi adiacenti a un nodo
    grafo.nodiAdiacenti(Giovanni);

    // Rimuove un arco
    grafo.rimuoviArco(Giada, Marco);
    std::cout << "Matrice di Adiacenza dopo la rimozione dell'arco tra Giada e Marco:" << std::endl;
    grafo.stampa();

    // Rimuove un nodo
    grafo.rimuoviNodo(Marco);
    std::cout << "Matrice di Adiacenza dopo la rimozione del nodo Marco:" << std::endl;
    grafo.stampa();

    // Aggiunta di un nuovo nodo e arco
    grafo.aggiungiNodo(Saverio);
    grafo.aggiungiArco(Valerio, Saverio, 179);
    std::cout << "Matrice di Adiacenza dopo l'aggiunta del nodo Saverio e dell'arco tra Valerio e Saverio:" << std::endl;
    grafo.stampa();

    // Verifica della connettività tra due nodi

if (grafo.verificaArco(Giada, Valerio)) {
    std::cout << "Il nodo Giada è connesso al nodo Valerio? Sì" << std::endl;
} else {
    std::cout << "Il nodo Giada è connesso al nodo Valerio? No" << std::endl;
}

    if (grafo.verificaArco(Giada, Marco)) {
    std::cout << "Il nodo Giada è connesso al nodo Marco? Sì" << std::endl;
} else {
    std::cout << "Il nodo Giada è connesso al nodo Marco? No" << std::endl;
}


    // Trova l'arco con peso minore per un nodo
    int arcoMinimo = grafo.arcoConPesoMinore(Giada);
    if (arcoMinimo != -1) {
        std::cout << "L'arco con il peso minimo da Giada ha peso: " << arcoMinimo << std::endl;
    } else {
        std::cout << "Non ci sono archi uscenti da Giada." << std::endl;
    }

    return 0;
}
