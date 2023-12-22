// Kiraci  sınıfı Mulk interface'inden türetiliyor
    class Kiraci implements Mulk {
        private String name; // Kiracının adı
        private String surname; // Kiracının soyadı
        private int age; // Kiracının yaşını temsil eden değişken

        public Kiraci(String name, String surname, int age) {
            this.name = name; // İsim atarız
            this.surname = surname; // Soyisim atarız
            this.age = age; // Yaş atarız
        }

        public void displayInfo() {
            System.out.println("Kiracı Adı: " + name); // İsim yazdırıyoruz
            System.out.println("Kiracı Soyadı: " + surname); // Soyisim yazdırıyoruz
            System.out.println("Kiracı Yaşı: " + age); // Yaş yazdırıyoruz
        }
    }


