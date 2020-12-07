<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.bundle.min.js">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js">
</head>
<body>
<div class="container-fluid px-1 px-md-5 px-lg-1 px-xl-5 py-5 mx-auto">
    <div class="card card0 border-0">
        <div class="row d-flex">
            <div class="col-lg-6 px-4 py-5">
                <div class="row px-4 py-5">
                <form class="form-inline">
                    <div class="form-group mx-sm-3 mb-2">
                        <input type="text" class="form-control" name="cari" placeholder="Cari Data">
                    </div>
                    <button type="submit" class="btn btn-primary mb-2">Cari</button>
                </form>        
                        <table class="table ml-7">
                            <tr>
                                <th>No</th>
                                <th>Biner</th>
                            </tr>
                            <?php 
                            include('konek.php');
                            if(isset($_GET['cari'])){
                                $cari = $_GET['cari'];
                                $data = mysqli_query($koneksi, "SELECT * FROM tugas WHERE hasil LIKE '%".$cari."%'");				
                            }else{
                                $data = mysqli_query($koneksi, "SELECT * FROM tugas");			
                            }
                            while($d = mysqli_fetch_array($data)){
                            ?>
                            <tr>
                                <td><?php echo $d['no']; ?></td>
                                <td><?php echo $d['hasil']; ?></td>
                            </tr>
                            <?php } ?>
                        </table>
                        <?php 
                        include('konek.php');
                        if(isset($_GET['cari'])){
                            $cari = $_GET['cari'];
                            $sub1 = intval(bindec(substr($cari, 0,4))) + 1;
                            $sub2 = intval(bindec(substr($cari, 4,4))) + 1;
                            $sub3 = intval(bindec(substr($cari, 8,4))) + 1;
                            $sub4 = intval(bindec(substr($cari, 12,4))) + 1;
                            $sub5 = intval(bindec(substr($cari, 16,4))) + 1;
                            echo " 
                            ".substr($cari, 0,4)." 
                            ".substr($cari, 4,4)."
                            ".substr($cari, 8,4)."
                            ".substr($cari, 12,4)."
                            ".substr($cari, 16,4)."";
                            echo "<b>  => Hasil Konversi :
                            ".bindec(substr($cari, 0,4))."
                            ".bindec(substr($cari, 4,4))."
                            ".bindec(substr($cari, 8,4))."
                            ".bindec(substr($cari, 12,4))."
                            ".bindec(substr($cari, 16,4))."
                            </b>";
                            $kelas = mysqli_query($koneksi, "SELECT * FROM kelas WHERE id = $sub3");
                            $matkul = mysqli_query($koneksi, "SELECT * FROM matkul WHERE id = $sub1");
                            $dosen = mysqli_query($koneksi, "SELECT * FROM dosen WHERE id = $sub2");
                            $ruangan = mysqli_query($koneksi, "SELECT * FROM ruangan WHERE id = $sub4");
                            $waktu = mysqli_query($koneksi, "SELECT * FROM waktu WHERE id = $sub5");
                            echo "<b>Hasil Output <br>";
                            while($d = mysqli_fetch_array($kelas)){
                                echo "Kelas : ". $d['kelas'];
                            }
                            while($d = mysqli_fetch_array($waktu)){
                                echo "<br>Waktu : ". $d['waktu'];
                            }
                            while($d = mysqli_fetch_array($matkul)){
                                echo "<br>Mata Kuliah : ". $d['matkul'];
                            }
                            while($d = mysqli_fetch_array($dosen)){
                                echo "<br>Dosen : ". $d['dosen'];
                            }
                            while($d = mysqli_fetch_array($ruangan)){
                                echo "<br>Ruangan :". $d['ruangan'];
                            }
                        }                   
                    ?>              
                </div>     
            </div>
            <div class="col-lg-6">
                <div class="card2 card border-0 px-4 py-5">
                    <div class="row px-3 mb-4">
                        <div class="line"></div> <small class="or text-center">Tugazzz</small>
                        <div class="line"></div>
                    </div>
                    <form action="insert.php" method="post">
                    <div class="row px-3"> <label class="mb-1">
                            <h6 class="mb-0 text-sm">Input</h6>
                        </label> <input class="mb-4" type="text" name="hasil" placeholder="Input Biner" required> 
                    </div>
                    <div class="row mb-3 px-3"> <button type="submit" class="btn btn-primary">Insert</button> 
                    </div>
                    </form>
                </div>
            </div>
        </div>
        <div class="bg-blue py-4">

        </div>
    </div>
</div>
</body>
</html>