
##### 1. Utworzenie katalogu repozytorium

```sh
$ cd Pulpit		# przejście do folderu (katalogu) "Pulpit"
$ mkdir pierwsze-repozytorium		# utworzenie folderu "pierwsze-repozytorium"


##### 2. Edycja plików projektu

```sh
$ touch test.txt	# stworzenie pustego pliku test.txt
$ nano test.txt		# edycja pliku test.txt edytorem tekstu "nano"
```

##### 3. Instalacja i inicjalizacja systemu kontroli wersji "git"

```sh
$ apt install git	# pobranie i instalacji oprogramowania/systemu "git"
$ git init		# inicjalizacja 
```

##### 4. Praca z systemem kontroli wersji (polecenia)

```sh
$ git help	# pomoc
$ git init	# inicjalizacja
$ git add .	# dodanie do systemu wszystkich plików z obecnego katalogu
$ git add *.txt	# j.w. -> tylko pliki z rozszerzeniem txt
$ git commit -m "komentarz"	
		# komentarz do plików dodanych poprzednią komendą

$ git status	# status plików projektu - porównanie obecnych do ostatnio "zrzuconych"
$ git log	# wyświetlenie kolejnych komentarzy do zmian w projekcie

$ git remote add origin https://github.com/majkel78/repo1.git
		# powiązanie systemu "git" z kontem w serwisie "github.com"

$ git push -u origin master	# pierwsze przesłanie projektu do serwisu
$ git push	# przesłanie aktualnej wersji projektu do serwisu
```

