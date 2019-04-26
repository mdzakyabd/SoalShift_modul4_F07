# SoalShift_modul4_F07

**Nomor 1**
Semua nama file dan folder harus terenkripsi
Enkripsi yang Atta inginkan sangat sederhana, yaitu Caesar cipher. Namun, Kusuma mengatakan enkripsi tersebut sangat mudah dipecahkan. Dia menyarankan untuk character list diekspansi,tidak hanya alfabet, dan diacak. Berikut character list yang dipakai:

qE1~ YMUR2"`hNIdPzi%^t@(Ao:=CQ,nx4S[7mHFye#aT6+v)DfKL$r?bkOGB>}!9_wV']jcp5JZ&Xl|\8s;g<{3.u*W-0

Misalkan ada file bernama “halo” di dalam folder “INI_FOLDER”, dan key yang dipakai adalah 17, maka:
“INI_FOLDER/halo” saat belum di-mount maka akan bernama “n,nsbZ]wio/QBE#”, saat telah di-mount maka akan otomatis terdekripsi kembali menjadi “INI_FOLDER/halo” .
Perhatian: Karakter ‘/’ adalah karakter ilegal dalam penamaan file atau folder dalam *NIX, maka dari itu dapat diabaikan.

**Code encrypt**

![enc1](https://user-images.githubusercontent.com/37015656/56797736-91366400-683f-11e9-9c78-f6da41b2405c.PNG)

`Pertama-tama kita simpan dahulu character list acak yang sudah ingin di pakai ke dalam array.`

![enc2](https://user-images.githubusercontent.com/37015656/56798046-436e2b80-6840-11e9-8a5a-6f5599426b9e.PNG)

`Lalu setelah input dilakukan, cek satu persatu huruf dari input, dan samakan dengan array ke berapa dari character tersebut, dan kita simpan index array yang merupakan character dari input ke i tersebut.`

![enc3](https://user-images.githubusercontent.com/37015656/56798063-4b2dd000-6840-11e9-9dfa-af92834c4835.PNG)

Setelah kita mendapatkan index array dari character ke i dari input, kita check terlebih dahulu, jika index tersebut bila ditambah dengan key yang kita inginkan lebih besar daripada panjang array, yang kita analogikan jika character list tersebut kita geser sebanyak key, asumsikan key = 17, maka character list itu akan digeser sebanyak 17 kali dari state awal, nah untuk mengisi kekosongan 17 character sebelum character pertama sekarang itu menggunakan character yang sekarang posisinya lebih dari 94.
