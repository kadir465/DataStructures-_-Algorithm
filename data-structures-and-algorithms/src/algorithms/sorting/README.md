# C/C++ Algoritma Örnekleri: Sıralama Algoritmaları (Sorting Algorithms)

Bu depo, temel veri yapıları ve algoritmalar derslerinde sıkça karşılaşılan sıralama algoritmalarının C ve C++ dillerindeki uygulamalarını içermektedir. Verilen dizileri küçükten büyüğe doğru sıralamak için farklı zaman ve alan karmaşıklıklarına sahip çeşitli yöntemler kullanılmıştır.

## İçerik ve Dosya Yapısı

Depo içerisindeki dosyalar aşağıdaki sıralama algoritmalarını barındırmaktadır:

### O(n²) Zaman Karmaşıklığına Sahip Algoritmalar
* `bubble_sort.c`: Kabarcık Sıralaması (Bubble Sort). Bitişik elemanları karşılaştırıp yer değiştirerek en büyük elemanları dizinin sonuna taşır.
* `selection_sort.c`: Seçmeli Sıralama (Selection Sort). Dizideki en küçük elemanı bulup başa atarak ilerler.
* `insertion_sort.c`: Araya Sokma Sıralaması (Insertion Sort). Elemanları tek tek alıp, zaten sıralanmış olan alt dizideki doğru konumuna yerleştirir.

### O(n log n) Zaman Karmaşıklığına Sahip Algoritmalar
* `quick_sort.c`: Hızlı Sıralama (Quick Sort). Bir pivot eleman seçer ve diziyi pivot değerinden küçükler ve büyükler olarak ikiye bölerek (Böl ve Yönet) özyinelemeli olarak sıralar.
* `merge_sort.cpp` & `merge_sort_2.cpp`: Birleştirme Sıralaması (Merge Sort). Diziyi sürekli ikiye böler ve tek eleman kalana kadar parçalar, ardından sıralı bir şekilde birleştirir.
* `heap_sort.C`: Yığın Sıralaması (Heap Sort). Verileri bir maksimum yığın (max-heap) ağaç yapısına dönüştürerek en büyük elemanı sona atma mantığıyla çalışır.

## Kurulum ve Çalıştırma

Bu projedeki dosyaları derlemek için sisteminizde GCC ve G++ derleyicilerinin kurulu olması gerekmektedir. Dosya uzantısına göre derleme komutları farklılık gösterir.

### C Dosyaları İçin (.c / .C)
Terminalinizde şu komutu çalıştırın:
```bash
gcc dosya_adi.c -o program_adi