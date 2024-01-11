# C Kodlarını Derleme ve Çalıştırma

Bu Repo, T.C. Sanayi ve Teknoloji Bakanlığı | Republic Of Türkiye Ministry of Industry and Technology tarafından düzenlenen Milli Teknoloji Akademisi'nin Yapay Zeka Temel Eğitim Programı'nda C dilinde yazılmış kodlarını içermektedir

## Adım 1: GCC C Compiler'ını İndirin
GCC C Compiler'ı, kodlarımızı derlemek için kullanacağımız araçtır. Bu compiler'i [SourceForge](https://sourceforge.net/projects/mingw/) sitesinden indirebilirsiniz.

## Adım 2: Kaynak Dosyayı Derleyin
Derleme işlemi, komut satırında aşağıdaki komutu kullanarak gerçekleştirilir:

```bash
gcc dosya.c -o program.exe
```

Bu komut, `dosya.c` adlı C kaynak dosyasını derler ve `program.exe` adında bir çıktı dosyası oluşturur.

## Adım 3: Programı Çalıştırın
Derlediğiniz programı çalıştırmak için, aşağıdaki komutu kullanabilirsiniz:

```bash
.\program.exe
```