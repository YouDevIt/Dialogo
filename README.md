# Dialogo
Il linguaggio in "italiano controllato" per creare avventure testuali in italiano.

Versione attuale: **0.06 / 8 aprile 2021**

Si tratta di un primo abbozzo che necessita di moltissimi miglioramenti e aggiunte.
Per ora è disponibile la **toolchain** per Windows.

Presentazione del progetto su YouTube:
https://www.youtube.com/watch?v=9RSKoO6xRRY

## Cos'è **Dialogo**
**Dialogo** è un linguaggio studiato appositamente per creare opere di *narrativa interattiva* in corso di sviluppo. L'autore è Leonardo Boselli (https://www.youdev.it)

In questa fase ad "accesso anticipato", **Dialogo** è costituito dalla seguente serie di programmi già inclusi nel pacchetto, perciò non c'è bisogno di scaricare alcun software aggiuntivo:
* L'editor *SciTE* (https://www.scintilla.org/SciTE.html)
* il generatore di parser PEG *packcc* (https://github.com/arithy/packcc)
* il compilatore ANSI C *tinycc* (https://bellard.org/tcc/)
* il compilatore e l'interprete *Dialog* (https://www.linusakesson.net/dialog/)

## Come compilare un'avventura scritta con **Dialogo**

Sono disponibili tre file batch per Windows:
1. *c_MANTO.bat*: compila il progetto "Manto_dell_Oscurità.dgo" e genera "progetto.dg" (un programma scritto in "Dialog")
1. *c_PROVA.bat*: compila il progetto "Prove_Tecniche.dgo" e genera "progetto.dg" (un programma scritto in "Dialog")
2. *d.bat*: esegue il file "progetto.dg" nel debugger e ne consente il debugging
3. *w.bat*: compila il file "progetto.dg" e genera una pagina web pubblicabile online

## Cosa fa "c.bat"

L'eseguibile "dialogo.exe" è un parser che legge il testo in italiano in cui è programmata l'avventura testuale da un file con estensione "dgo" (per esempio "prova.dgo") e lo traduce in un file in linguaggio "Dialog" (per esempio "prova.dg").

Il parser è definito in "dialogo.peg". Per il momento è ancora in evoluzione, ma ottenuta la versione finale, la sua compilazione non sarà più necessaria, se non per eventuali maggiori aggiornamenti.

Per ottenere il sorgente in linguaggio C del parser viene usato "packcc".

Per compilare il sorgente in C del parser in un eseguibile viene usato il compilatore "tcc" (tinycc) e si ottiene "dialogo.exe".

## Lista parziale delle frasi riconosciute

L'italiano controllato richiede una serie di frasi che seguono schemi ben precisi. Le frasi riconosciute sono in continuo aggioranmento.

Un elenco parziale è disponibile qui: https://github.com/YouDevIt/Dialogo/blob/main/FRASI.txt

## Domande?
Puoi contattarmi per email (leonardo.boselli@youdev.it)

