# Model domeny

## Encje

- **Film** – tytuł, opis, czas trwania, gatunek, reżyser, plakat
- **Seans** – data, godzina, sala, dostępne miejsca
- **Sala kinowa** – numer, pojemność, typ (np. 3D, IMAX)
- **Miejsce** – numer rzędu, numer miejsca, typ (zwykłe, VIP)
- **Użytkownik** – imię, nazwisko, email, hasło
- **Rezerwacja** – data złożenia, status (oczekująca, potwierdzona, anulowana)
- **Bilet** – numer, cena, typ (normalny, ulgowy), status
- **Płatność** – kwota, metoda płatności, data, status

---

## Relacje

- Film jest wyświetlany na wielu Seansach
- Seans odbywa się w jednej Sali kinowej
- Sala kinowa posiada wiele Miejsc
- Użytkownik składa jedną lub więcej Rezerwacji
- Rezerwacja dotyczy jednego Seansu
- Rezerwacja obejmuje jedno lub więcej Miejsc
- Rezerwacja generuje jeden lub więcej Biletów
- Płatność jest powiązana z jedną Rezerwacją



---

## Uwagi

- Miejsce może być zajęte tylko na jeden seans w danym czasie – system powinien blokować miejsce w momencie rozpoczęcia rezerwacji.
- Status rezerwacji zmienia się po potwierdzeniu płatności.
- Bilet jest generowany dopiero po pomyślnej płatności.
- Użytkownik może anulować rezerwację zgodnie z regulaminem kina.
