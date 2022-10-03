# Sprendimas ir problema: https://leetcode.com/problems/palindrome-number/submissions/


Analizė:

Duomenys/kintamieji, kurie bus naudojami:
1. Įvestis - int tipo numeris, kurio ilgis neaiškus.
2. Skaičiavimams: 
	String tipo kintamasis - įvesties skaičiaus pavertimui į string.
	Int: kintamasis skaičiaus ilgiui saugoti, kintamasis ciklo žingsniams.
	Bool: ieškant nesutapimų tarp duoto skaičiaus skaičių.
3. Išvestis - bool. Atsakymui ar skaičius palindromas ar ne.

	

Algoritmo konstravimas/projektavimas:

1. Pirmiausia gavus skaičių pakeisti jo tipą iš int į string, kad būtų galima rasti skaičiaus ilgį.
2. Paleisti cikla ir jo metu tikrinti ar skaičiai (pirmas ir paskutinis, antras ir priešpaskutinis)
nesutampa.
3. Radus pirmą nesutapimą skaičiaus nesutapimą fiksuoti keičiant loginio kintamojo reikšmę į false
ir iškart išeiti iš ciklo, nes bet koks nesutapimas jau reiškia, jog skaičius ne palindromas.
4. Paskutinė sąlyga: jeigu bent vienas skaičius iš ciklo nesutampa - grąžinam false, visais kitais
atvejais grąžinam true.
