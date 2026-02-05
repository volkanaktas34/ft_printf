*This project has been created as part of the 42 curriculum by vaktas.*

ft_printf - @42Istanbul

EN: 

# **Description**

The ft_printf project is a significant milestone in the 42 school curriculum. The goal of this project is to re-code the standard C library's printf function, providing a deeper understanding of variadic functions and complex format parsing in C.

By building this function from scratch, the project reinforces concepts of data types, memory representation (specifically for pointers and hexadecimals), and output stream management. It serves as a core component of the personal toolset that replaces standard functions in future 42 projects.

### The Function: Detailed Overview

The implementation handles the following format specifiers:

    Character & String: Handles single characters (%c) and null-terminated strings (%s).

    Integer & Unsigned: Manages signed integers (%d, %i) and unsigned decimal numbers (%u).

    Hexadecimal & Pointer: Converts numbers to hexadecimal format (lower %x and upper %X) and prints memory addresses as pointers (%p).

    Percent Sign: Correctly escapes and prints the literal % character.

# **Instructions**

### Compilation

The project includes a Makefile that compiles the source files into a static library file called libftprintf.a.

    To compile the mandatory part:

    make

    To remove object files:

    make clean

    To remove all generated files (including the library):

    make fclean

    To recompile the entire project:

    make re

### Execution

To use this library in your own C projects, include the header file in your code: #include "ft_printf.h"

When compiling your project, link the library as follows: cc main.c -L. -lftprintf -o program_name 

# **Resources**

    Variadic Functions Documentation: Detailed guide on stdarg.h.

    Linux Man Pages: Accessible via the command man 3 printf.

    C Programming Language (K&R): The definitive guide to C syntax and logic.

    Makefile Guide: GNU Make Manual.

### AI Usage Disclosure

Artificial Intelligence (specifically Gemini) was utilized in this project for the following tasks:

    Algorithm Refinement: AI was used to brainstorm efficient recursive methods for hexadecimal and pointer conversions to ensure accuracy and performance.

    Documentation: AI assisted in structuring and translating the technical descriptions within this README file to ensure clarity for peers and recruiters.

    Edge Case Analysis: AI provided scenarios for handling null pointers and boundary values (like INT_MIN) to improve the robustness of the function.



*Bu proje, 42 müfredatının bir parçası olarak vaktas tarafından oluşturulmuştur.*

ft_printf - @42Istanbul

TR: 

# **Açıklama**

ft_printf projesi, 42 müfredatının temel taşlarından biridir. Bu projenin amacı, standart C kütüphanesindeki printf fonksiyonunu yeniden yazarak, C dilindeki değişken sayıda argüman alan fonksiyonlar (variadic functions) ve karmaşık format ayrıştırma konularında derinlemesine bilgi sahibi olmaktır.

Bu fonksiyonu sıfırdan inşa etmek; veri tipleri, bellekteki veri temsilleri (özellikle pointerlar ve onaltılık sistemler) ve çıktı akışı yönetimi gibi kavramları pekiştirir. Bu kütüphane, ilerideki 42 projelerinde standart fonksiyonların yerini alacak kişisel araç setinin önemli bir parçasıdır.

### Fonksiyon: Detaylı Genel Bakış

Sistem aşağıdaki format belirleyicilerini işlemektedir:

    Karakter & String: Tek karakterleri (%c) ve karakter dizilerini (%s) işler.

    Tam Sayı & İşaretsiz Sayı: Tam sayıları (%d, %i) ve işaretsiz onluk sayıları (%u) yönetir.

    Onaltılık Sayı & İşaretçi: Sayıları onaltılık (hexadecimal) tabana çevirir (küçük %x ve büyük %X) ve bellek adreslerini işaretçi (%p) olarak yazdırır.

    Yüzde İşareti: % karakterinin kendisini ekrana doğru şekilde yazdırır.

# **Talimatlar**

### Derleme

Proje, kaynak dosyalarını libftprintf.a adlı statik bir kütüphane dosyasına derleyen bir Makefile içerir.

    Zorunlu bölümü derlemek için:

    make

    Nesne dosyalarını (.o) silmek için:

    make clean

    Oluşturulan tüm dosyaları (kütüphane dahil) silmek için:

    make fclean

    Tüm projeyi yeniden derlemek için:

    make re

### Kullanım

Bu kütüphaneyi kendi C projelerinizde kullanmak için başlık (header) dosyasını kodunuza dahil edin: #include "ft_printf.h"

Projenizi derlerken kütüphaneyi aşağıdaki şekilde bağlayın: cc main.c -L. -lftprintf -o program_adi

# **Kaynaklar**

    Variadic Functions Dokümantasyonu: stdarg.h üzerine ayrıntılı kılavuz.

    Linux Man Sayfaları: man 3 printf komutuyla erişilebilir.

    C Programlama Dili (K&R): C sözdizimi ve mantığına dair kesin kılavuz.

    Makefile Kılavuzu: GNU Make Kılavuzu.

### Yapay Zeka Kullanım Beyanı

Bu projede Yapay Zeka (özellikle Gemini), aşağıdaki görevler için kullanılmıştır:

    Algoritma Geliştirme: Onaltılık dönüşümler ve pointer adres yönetimi için verimli özyinelemeli (recursive) yöntemler üzerinde fikir alışverişi yapıldı.

    Dokümantasyon: Bu README dosyasındaki teknik açıklamaların, meslektaşlar ve işe alım uzmanları için net olması adına yapılandırılmasına ve tercümesine yardımcı olundu.

    Uç Durum Analizi: Fonksiyonun dayanıklılığını artırmak için NULL pointerlar ve sınır değerler (örneğin INT_MIN) gibi senaryolar üzerinde çalışıldı.