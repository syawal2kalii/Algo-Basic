-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 06, 2020 at 06:20 AM
-- Server version: 10.4.13-MariaDB
-- PHP Version: 7.4.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `tugas`
--

-- --------------------------------------------------------

--
-- Table structure for table `dosen`
--

CREATE TABLE `dosen` (
  `id` int(11) NOT NULL,
  `dosen` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `dosen`
--

INSERT INTO `dosen` (`id`, `dosen`) VALUES
(1, 'Tasrif Hasanuddin, S.Kom., M.Cs.'),
(2, 'Luthfi Budi Ilmawan, S.Kom., M.Cs.'),
(3, 'Nia Kurniati, S.Kom., M.Kom.'),
(4, 'Yulita Salim, S.Kom., M.T.'),
(5, 'Poetri Lestari Lokapitasari, S.Kom., M.T.'),
(6, 'Abdul Rachman Manga’, S.Kom., M.T.'),
(7, 'Ramdan Satra, S.Kom., M.Kom.'),
(8, 'Huzain Azis, S.Kom., M.Cs.'),
(9, 'Dedy Atmajaya, S.Kom., M.Eng.'),
(10, 'Mardiyyah Hasnawi, S.Kom., M.Kom.'),
(11, 'Siska Anraeni, S.Kom., M.T.'),
(12, 'Irawati, S.Kom., M.T.'),
(13, 'Wistiani Astuti, S.Kom., M.M.'),
(14, 'Syahrul Mubarak Abdullah, S.Kom., M.Kom.'),
(15, 'Sugiarti, S.Kom., M.Kom.'),
(16, 'As’ad Djamalilleil, S.Kom., M.T.'),
(17, 'Muh. Aliyazid Mude, S.Kom., M.Kom'),
(18, 'Lukman Syafie, S.Si., M.Si.'),
(19, 'Herdiyanti, S.Si., M.Eng.'),
(20, 'Farniwati Fattah, S.T., M.T.');

-- --------------------------------------------------------

--
-- Table structure for table `kelas`
--

CREATE TABLE `kelas` (
  `id` int(11) NOT NULL,
  `kelas` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `kelas`
--

INSERT INTO `kelas` (`id`, `kelas`) VALUES
(1, 'A1'),
(2, 'A2'),
(3, 'A3'),
(4, 'A4'),
(5, 'A5'),
(6, 'A6'),
(7, 'A7'),
(8, 'A8'),
(9, 'A9'),
(10, 'B1'),
(11, 'B2'),
(12, 'B3'),
(13, 'B4'),
(14, 'B5'),
(15, 'B6'),
(16, 'B7'),
(17, 'B8'),
(18, 'B9'),
(19, 'C1'),
(20, 'C2');

-- --------------------------------------------------------

--
-- Table structure for table `matkul`
--

CREATE TABLE `matkul` (
  `id` int(11) NOT NULL,
  `matkul` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `matkul`
--

INSERT INTO `matkul` (`id`, `matkul`) VALUES
(1, 'Bahasa Inggris'),
(2, 'Pendidikan Kewargane'),
(3, 'Aqidah'),
(4, 'Fisika'),
(5, 'Logika Informatika'),
(6, 'Kalkulus'),
(7, 'Bahasa Indonesia'),
(8, 'Syariah'),
(9, 'Sistem Kendali'),
(10, 'Matematika Diskrit'),
(11, 'Basis Data'),
(12, 'Statistika'),
(13, 'Jaringan Komputer'),
(14, 'Akhlak'),
(15, 'Micriprocessor'),
(16, 'Komunikasi Data'),
(17, 'Pemrograman Web'),
(18, 'Bahasa Arab'),
(19, 'Bahasa Mandarin'),
(20, 'Manajemen Proyek');

-- --------------------------------------------------------

--
-- Table structure for table `ruangan`
--

CREATE TABLE `ruangan` (
  `id` int(11) NOT NULL,
  `ruangan` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `ruangan`
--

INSERT INTO `ruangan` (`id`, `ruangan`) VALUES
(1, '301'),
(2, '302'),
(3, '303'),
(4, '304'),
(5, '305'),
(6, '306'),
(7, '307'),
(8, '308'),
(9, '309'),
(10, '310'),
(11, '311'),
(12, '312'),
(13, '313'),
(14, '314'),
(15, '315'),
(16, '316'),
(17, '317'),
(18, '318'),
(19, '319'),
(20, '320');

-- --------------------------------------------------------

--
-- Table structure for table `tugas`
--

CREATE TABLE `tugas` (
  `no` int(11) NOT NULL,
  `hasil` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tugas`
--

INSERT INTO `tugas` (`no`, `hasil`) VALUES
(1, '11111111111111111111'),
(2, '00001111000011110000'),
(3, '11111111111111111111'),
(4, '00010001001100010111');

-- --------------------------------------------------------

--
-- Table structure for table `waktu`
--

CREATE TABLE `waktu` (
  `id` int(11) NOT NULL,
  `waktu` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `waktu`
--

INSERT INTO `waktu` (`id`, `waktu`) VALUES
(1, 'Senin, 01-11-2020'),
(2, 'Selasa, 02-11-2020'),
(3, 'Rabu, 03-11-2020'),
(4, 'Kamis, 04-11-2020'),
(5, 'Jumat, 05-11-2020'),
(6, 'Sabtu, 06-11-2020'),
(7, 'Senin, 08-11-2020'),
(8, 'Selasa, 09-11-2020'),
(9, 'Rabu, 10-11-2020'),
(10, 'Kamis, 11-11-2020'),
(11, 'Jumat, 12-11-2020'),
(12, 'Sabtu, 13-11-2020'),
(13, 'Senin, 15-11-2020'),
(14, 'Selasa, 16-11-2020'),
(15, 'Rabu, 17-11-2020'),
(16, 'Kamis, 18-11-2020'),
(17, 'Jumat, 19-11-2020'),
(18, 'Sabtu, 20-11-2020'),
(19, 'Senin, 21-11-2020'),
(20, 'Selasa, 22-11-2020');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `dosen`
--
ALTER TABLE `dosen`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `kelas`
--
ALTER TABLE `kelas`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `matkul`
--
ALTER TABLE `matkul`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `ruangan`
--
ALTER TABLE `ruangan`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tugas`
--
ALTER TABLE `tugas`
  ADD PRIMARY KEY (`no`);

--
-- Indexes for table `waktu`
--
ALTER TABLE `waktu`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `dosen`
--
ALTER TABLE `dosen`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `kelas`
--
ALTER TABLE `kelas`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `matkul`
--
ALTER TABLE `matkul`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `ruangan`
--
ALTER TABLE `ruangan`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `tugas`
--
ALTER TABLE `tugas`
  MODIFY `no` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `waktu`
--
ALTER TABLE `waktu`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
