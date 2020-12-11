<?php
include('konek.php');

$hasil = $_POST['hasil'];

if (intval(strlen($hasil)) == 20) {
    $insert = mysqli_query($koneksi, "INSERT INTO tugas(hasil) VALUES ('$hasil')");
}



header('location:index.php');

?>