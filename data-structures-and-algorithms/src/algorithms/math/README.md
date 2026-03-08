# C Algoritma Örnekleri: Taban Dönüşümleri ve Kombinasyonlar

Bu depo, C programlama dilinde yazılmış temel algoritma örneklerini içermektedir. Proje genelinde özyinelemeli (recursive) fonksiyonlar kullanılarak matematiksel taban dönüşümleri ve döngüler kullanılarak alt küme/kombinasyon eşleşmeleri gerçekleştirilmiştir.

## İçerik ve Dosya Yapısı

Depo içerisindeki her bir dosya, spesifik bir algoritma problemini çözmek üzere tasarlanmıştır:

### 1. Taban Dönüşümleri (Base Conversions)
Bu dosyalar, 10'luk tabandaki (Decimal) sayıları hedef tabanlara çevirmek için özyinelemeli (recursive) algoritmalar kullanır.

* `convert_bas2.c`: 10'luk tabandaki bir sayıyı 2'lik tabana (Binary - İkili taban) çevirir.
* `convert_base9.c`: 10'luk tabandaki bir sayıyı 9'luk tabana çevirir.
* `convert_base16.c`: 10'luk tabandaki bir sayıyı 16'lık tabana (Hexadecimal - On altılık taban) çevirir. A-F arası harflerin ASCII karşılıklarını dinamik olarak hesaplar.

### 2. Alt Küme ve Kombinasyonlar (Subsets & Combinations)
Bu dosyalar, diziler içerisindeki elemanların birbirleriyle olan ikili eşleşmelerini ve permütasyonlarını listelemek için iç içe döngüler kullanır.

* `altkume.c`: Verilen karakter dizisindeki elemanların (A, B, C) olası ikili gruplarını ekrana yazdırır.
* `binary_combinations.c`: Belirlenen bir dizi içerisindeki elemanların kombinasyonlarını listeler.

## Kurulum ve Çalıştırma

Bu projedeki dosyaları derlemek ve çalıştırmak için sisteminizde bir C derleyicisinin (örneğin GCC) kurulu olması gerekmektedir.

Herhangi bir dosyayı derlemek için terminalinizde şu komutu çalıştırın:

```bash
gcc dosya_adi.c -o program_adi