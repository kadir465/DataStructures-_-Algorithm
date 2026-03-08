# C Algoritma Örnekleri: Özyinelemeli (Recursive) Matematik Hesaplamaları

Bu depo, C programlama dilinde yazılmış ve temel matematiksel problemleri özyinelemeli (recursive) fonksiyon yaklaşımıyla çözen algoritmaları içermektedir.

## İçerik ve Dosya Yapısı

Depo içerisindeki dosyalar aşağıdaki matematiksel işlemleri gerçekleştirmek üzere tasarlanmıştır:

* `obeb_recursive.c`: Kullanıcıdan alınan iki tam sayının En Büyük Ortak Bölenini (EBOB / OBEB) Öklid algoritması mantığıyla ve özyinelemeli bir fonksiyon kullanarak hesaplar.
* `pascal_traingle.c`: Pascal üçgeninin temelini oluşturan kombinasyon (C(n,r)) hesaplamalarını yapar. Verilen iki değer için özyinelemeli olarak kombinasyon sonucunu döndürür.
* `factorial_recursice.c`: Kullanıcının girdiği bir tam sayının faktöriyel değerini özyinelemeli bir yapı ile hesaplar.

## Kurulum ve Çalıştırma

Bu projedeki dosyaları derlemek için sisteminizde GCC veya benzeri bir C derleyicisi bulunmalıdır.

Bir dosyayı derlemek için terminalinizde şu komutu çalıştırın:

```bash
gcc dosya_adi.c -o program_adi