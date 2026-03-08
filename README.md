# Veri Yapıları ve Algoritmalar (Data Structures & Algorithms)

Bu depo, bilgisayar bilimlerinin temelini oluşturan veri yapıları ve algoritmaların C ve C++ dilleri kullanılarak geliştirilmiş uygulamalarını içermektedir. Proje, farklı algoritma türlerini mantıksal bir klasör yapısı içerisinde kategorize ederek hem öğrenme hem de referans amacıyla oluşturulmuştur.

## Proje Klasör Yapısı

Depo içerisindeki algoritmalar, işlevlerine göre aşağıdaki alt klasörlere ayrılmıştır. Her bir klasörün kendi içerisinde, o modülün detaylarını anlatan özel bir `README.md` dosyası bulunmaktadır.

### 1. `math/` (Matematiksel ve Mantıksal Algoritmalar)
Bu bölüm, sayı tabanı dönüşümleri (ikili, dokuzlu, on altılık tabanlar) ve küme teorisi (alt küme, ikili kombinasyonlar) üzerine yazılmış algoritmaları barındırır.
* **Dosyalar:** `altkume.c`, `binary_combinations.c`, `convert_bas2.c`, `convert_base9.c`, `convert_base16.c`

### 2. `recurion/` (Özyinelemeli Algoritmalar)
Özyinelemeli (recursive) fonksiyon mantığını kavramak için temel matematiksel problemlerin çözümlerini içerir.
* **Dosyalar:** `factorial_recursice.c`, `obeb_recursive.c`, `pascal_traingle.c`

### 3. `searching/` (Arama Algoritmaları)
Veri dizileri içerisinde belirli bir elemanı bulmak için kullanılan doğrusal ve logaritmik zaman karmaşıklıklarına sahip arama algoritmalarını içerir.
* **Dosyalar:** `binary_search.c`, `linear_search.c`

### 4. `sorting/` (Sıralama Algoritmaları)
Verilen dizileri belirli bir düzende sıralamak için kullanılan, farklı O(n²) ve O(n log n) zaman karmaşıklıklarına sahip çeşitli sıralama algoritmalarının implementasyonlarını içerir.
* **Dosyalar:** `bubble_sort.c`, `heap_sort.C`, `insertion_sort.c`, `merge_sort.cpp`, `merge_sort_2.cpp`, `quick_sort.c`, `selection_sort.c`

## Kurulum ve Derleme

Projedeki algoritmaları kendi bilgisayarınızda derlemek ve çalıştırmak için sisteminizde GCC (C dosyaları için) ve G++ (C++ dosyaları için) derleyicilerinin kurulu olması gerekmektedir.

**C dosyalarını derlemek için:**
```bash
gcc klasor_adi/dosya_adi.c -o program_adi