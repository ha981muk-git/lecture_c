/* C-Demoprogramm fuer den Umgang mit sequentiellen Dateien */
/* als Argument uebergebene Zeichenfolge soll als Dateiname verwendet werden */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	char prognam [1024];
	FILE * fp;			/* Datei-Zugriffsmechanismus */
	char buffer [1024];		/* Lesepuffer */
	
	printf("1) Das Programm |%s| hat %i Argumente\n", argv[0], argc);
	
	/* Netto-Programmname herstellen */

	if (strrchr(argv[0], '/')) {
		strncpy(prognam, strrchr(argv[0], '/')+1, sizeof(prognam));
	}
	else {
		strncpy(prognam, argv[0], sizeof(prognam));
	}
	
	printf("2) Das Programm |%s| hat %i Argumente\n", prognam, argc);
	
	/* Anzahl der Argumente ueberpruefen (es 1 Dateiname sein) */
	
	if (argc != 2) {	/* argc muss 2 sein */
		printf("%s: %s braucht genau 1 Aufrufargument (Dateiname)\n", prognam, prognam);
		fprintf(stderr, "%s: bad parameter count, errno = %i (%s)\n", prognam, EINVAL, strerror(EINVAL));
		return EINVAL;
	}
	
	/* Argument verarbeiten, Datei oeffnen */
	
	if ((fp = fopen(argv[1],"r+")) == NULL) {
		printf("%s: Fehler beim Oeffnen der Datei %s\n", prognam, argv[1]);
		fprintf(stderr, "%s: file open error on %s, errno = %i (%s)\n", prognam, argv[1], errno, strerror(errno));
		return errno;
	}
	
	/* aus der Datei lesen bis zum Ende */
	
	while(fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("gelesen: |%s|\n", buffer);
	}
	
	/* an die Datei eine neue Zeile anhaengen */
	
	strncpy(buffer, "Das ist eine ganz neue zusaetzliche Zeile\n", sizeof(buffer));
	
	if (fputs(buffer, fp) == EOF) {
		printf("%s: Fehler beim Schreiben der Datei %s\n", prognam, argv[1]);
		fprintf(stderr, "%s: file write error (fputs()) on |%s|, errno = %i (%s)\n", prognam,
					buffer, errno, strerror(errno));
		return errno;
	}
	
	/* aus der Datei nochmal neu lesen bis zum Ende */
	
	printf("---------------- neu auslesen -----------------------\n");
	
	rewind(fp);	/* Dateizeiger auf den Dateianfang zurueckstellen */
	
	while(fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("gelesen: |%s|\n", buffer);
	}
	
	fclose(fp);		/* wer fopen() sagt, muss auch fclose() sagen */
	
	return 0;
}
