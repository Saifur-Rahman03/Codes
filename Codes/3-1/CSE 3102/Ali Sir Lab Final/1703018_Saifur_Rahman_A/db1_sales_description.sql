-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 13, 2021 at 02:05 PM
-- Server version: 10.4.17-MariaDB
-- PHP Version: 8.0.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `sales description`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `Cust_ID` int(11) NOT NULL,
  `Cust_Name` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`Cust_ID`, `Cust_Name`) VALUES
(1, 'NAim'),
(2, 'Antor'),
(3, 'Sohan'),
(4, 'Yeasir'),
(5, 'Abid'),
(6, 'Soumik'),
(7, 'Fariz'),
(8, 'Sadaf'),
(9, 'Jion'),
(10, 'Asif');

-- --------------------------------------------------------

--
-- Table structure for table `item`
--

CREATE TABLE `item` (
  `Item_ID` int(11) NOT NULL,
  `Item_Name` varchar(30) DEFAULT NULL,
  `price` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `item`
--

INSERT INTO `item` (`Item_ID`, `Item_Name`, `price`) VALUES
(1, 'Jersey', 1000),
(2, 'Trouser', 1500),
(3, 'Boot', 2000),
(4, 'Sock', 100),
(5, 'Guards', 300),
(6, 'Football', 400),
(7, 'Shorts', 200),
(8, 'Goalposts', 3000),
(9, 'Corner Flags', 1500),
(10, 'Whistle', 100);

-- --------------------------------------------------------

--
-- Table structure for table `relationship_r_i`
--

CREATE TABLE `relationship_r_i` (
  `Cust_ID` int(11) NOT NULL,
  `Item_ID` int(11) NOT NULL,
  `Bill_NO` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `relationship_r_i`
--

INSERT INTO `relationship_r_i` (`Cust_ID`, `Item_ID`, `Bill_NO`) VALUES
(1, 3, 5),
(2, 4, 6),
(3, 5, 7),
(4, 6, 8),
(5, 7, 9),
(6, 8, 10),
(7, 9, 11),
(8, 10, 12),
(1, 1, 1),
(2, 2, 2),
(3, 3, 3),
(4, 4, 4),
(5, 5, 5),
(6, 6, 6),
(7, 1, 15),
(8, 2, 16),
(9, 3, 17),
(10, 4, 18),
(1, 5, 19),
(2, 6, 20),
(3, 7, 21),
(4, 8, 22),
(5, 8, 23),
(6, 9, 24),
(7, 7, 25),
(8, 8, 26),
(9, 9, 27),
(10, 10, 28),
(10, 10, 29),
(10, 10, 30),
(3, 5, 31);

-- --------------------------------------------------------

--
-- Table structure for table `sales`
--

CREATE TABLE `sales` (
  `Bill_NO` int(11) NOT NULL,
  `Bill_Date` date DEFAULT NULL,
  `Quantity_Sold` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `sales`
--

INSERT INTO `sales` (`Bill_NO`, `Bill_Date`, `Quantity_Sold`) VALUES
(1, '2021-07-01', 5),
(2, '2021-07-02', 5),
(3, '2021-07-03', 10),
(4, '2021-07-04', 10),
(5, '2021-07-05', 5),
(6, '2021-07-06', 15),
(7, '2021-07-07', 10),
(8, '2021-07-08', 5),
(9, '2021-07-09', 5),
(10, '2021-07-10', 10),
(11, '2021-07-11', 5),
(12, '2021-07-12', 5),
(13, '2021-07-13', 5),
(14, '2021-07-14', 10),
(15, '2021-07-15', 5),
(16, '2021-07-16', 5),
(17, '2021-07-17', 5),
(18, '2021-07-18', 5),
(19, '2021-07-19', 5),
(20, '2021-07-20', 10),
(21, '2021-07-21', 5),
(22, '2021-07-22', 5),
(23, '2021-07-23', 5),
(24, '2021-07-24', 5),
(25, '2021-07-25', 5),
(26, '2021-07-26', 10),
(27, '2021-07-27', 5),
(28, '2021-07-28', 5),
(29, '2021-07-29', 5),
(30, '2021-07-30', 10),
(31, '2021-07-31', 5);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`Cust_ID`);

--
-- Indexes for table `item`
--
ALTER TABLE `item`
  ADD PRIMARY KEY (`Item_ID`);

--
-- Indexes for table `sales`
--
ALTER TABLE `sales`
  ADD PRIMARY KEY (`Bill_NO`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
