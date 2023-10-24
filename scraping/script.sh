#!/bin/bash

# Vérification du nombre d'arguments
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <nom_manga> <numero_volume> <page_debut>"
    exit 1
fi

# Extraction des arguments
nom_manga="$1"
numero_volume="$2"
page_debut="$3"

# Boucle pour télécharger les 10 pages
for ((i=0; i<10; i++)); do
    # Calcul du numéro de page
    num_page=$(printf "%03d" $((page_debut + i)))

    # Exécution de la commande pour télécharger l'image
    ./dl-im "http://opfrcdn.xyz/uploads/manga/$nom_manga/chapters/Volume%20$numero_volume/${num_page}.jpg" "images/${nom_manga}${num_page}"
done
