<?php 
include('konek.php');
	if(isset($_GET['cari'])){
		$cari = $_GET['cari'];
		$data = mysqli_query($koneksi, "SELECT * FROM tugas WHERE hasil LIKE '%".$cari."%'");				
	}else{
		$data = mysqli_query($koneksi, "SELECT * FROM tugas");			
	}
	$no = 1;
	while($d = mysqli_fetch_array($data)){
?>
	<tr>
		<td><?php echo $no++; ?></td>
		<td><?php echo $d['hasil']; ?></td>
    </tr>
    
<?php
    } 
 ?>