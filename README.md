# Cpp-Matematiksel-Uygulamalar

* Mutlu Sayılar

	 Bir sayının basamaklarının kareleri alınıp toplanır. Bu şekilde çıkan her yeni sayıya aynı işlem tekrarlanır. Eğer sonuç 1 olursa mutlu sayıdır, sonuç döngüye bağlanıyorsa mutlu sayı değildir.
	ÖRN: 7 → (7²=49)
	     49 → (4²+9²=97)
	     97 → (9²+7²=130)
	     130 → (1²+3²=10)
	     10 → 1        
       (1,7,10,13,19,23,28,31,32,44,49,68,70,79,82,86,91,94,97)

* Mükemmel Sayılar

	Kendisi hariç bütün pozitif bölenlerinin toplamı kendisine eşit olan sayılara mükemmel sayı denir.
	ÖRN: 6 → 1+2+3
	(6, 28, 496, 8128)

* Palindrom Sayılar

	 Palindromik sayı, iki taraftan okunduğu zaman okunuş yönüyle aynı olan sayılara verilen isimdir.
	(10001, 10101, 10201, 10301, 10401, 10501)

* Babil Algoritması

	Köklü sayıları hesaplamada kullanılan tekrarlama sürecine dayanan bir yöntemdir.
	x=(n/x+x)/2 formülü ile bulunur
  
* Harshad (Niven) Sayısı

	Rakamlarının toplamına tam olarak bölünen sayıya harshad sayısı denir
	ÖRN: 24 → 2+4=6
        (24, 192, 1729)
	
* Armstrong Sayıları

	Barındırdığı basamak sayısını, her bir basamağının üstü şeklinde kullanılarak hesaplandığı toplama işleminin sonucu kendisine eşit olan sayılardır.
	ÖRN: 153 → 1^3 + 5^3  + 3^3
   	(0, 1, 2, 3, 153, 370, 407, 1634, 8208)

* Fibonacci sayı dizisini girilen adet kadar yazdırma

	 Fibonacci dizisi, 0 ve 1 ile başlayan ve her sayının kendisinden önce gelen iki sayının toplanması ile elde edildiği bir sayı dizisidir.
	(0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,  89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946)

* 10 luk sistemdeki sayıyı 2 lik sisteme çevirme

	10′ luk (decimal) sistemdeki sayıyı 2′ lik (binary) sisteme çevirmek için sayıyı devamlı olarak 2 ye bölüp kalan sayıları elde ederek bölme işlemi yapılamayıncaya kadar devam edilir. En son bölümden başlayarak kalanlar tersten yazılır.
  
* Girilen bir tam sayının hanelerine ayrılması

	İlk olarak sayıyı 10 a bölerek kaç basamaklı olduğu bulunur
	 Basamak sayısı kadar sayının basamak değeri(1,10,100,1000..) hesaplanır ve sayıya bölünür. Soldaki basamak bulunur, sayıdan bu basamak değeri çıkarılır. Kalan kısıma aynı işlem tekrar edilir, sayaç sıfırlanınca işlem biter.

