# Tugas-Besar-kelompok_R
topik-17(coffee shop loyalti poin.in)
Deskripsi
Aplikasi loyalitas coffee shop mencatat pelanggan dan coffee shop yang menjadi tempat pelanggan
bertransaksi. Seorang pelanggan dapat menjadi anggota atau bertransaksi di beberapa coffee shop dan setiap
coffee shop dapat memiliki banyak pelanggan. Hubungan pelanggan dan coffee shop digunakan untuk
mengelola keanggotaan serta poin loyalitas. Data hubungan tersebut dikelola melalui Multi Linked List,
sedangkan transaksi pelanggan dicatat dalam Binary Search Tree.

Struktur Data
Parent : Pelanggan (id pelanggan, nama, nomor telepon)
Child : Coffee Shop (id coffee shop, nama, alamat, kategori)
Relasi : Keanggotaan Loyalty (nomor kartu/member, tanggal bergabung, level member, total

poin, status keanggotaan)

Binary Search Tree : Transaksi dengan key tanggal transaksi (id pelanggan, id coffee shop, tanggal
transaksi, daftar menu, total pembayaran, poin diperoleh, promo yang digunakan)

Fungsional khusus
• Melakukan transaksi pelanggan dengan memilih coffee shop tempat pelanggan
terdaftar sebagai anggota loyalty serta memperbarui poin loyalitas pelanggan
pada coffee shop terkait setelah transaksi berhasil. Penambahan poin berbeda
untuk setiap levelnya.
• Menyimpan pendaftaran peserta ke BST berdasarkan tanggal transaksi.
• Menampilkan informasi pelanggan dengan total poin tertinggi.
• Menampilkan informasi coffee shop dengan pendapatan transaksi terbesar

Fungsional tambahan (Bonus)
• Menampilkan informasi pelanggan dengan jumlah transaksi terbanyak.
• Menampilkan informasi coffee shop dengan jumlah anggota loyalty terbanyak.
• Menampilkan informasi pelanggan yang memenuhi syarat untuk mendapatkan
promo berdasarkan poin
