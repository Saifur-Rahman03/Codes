-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 13, 2021 at 02:04 PM
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
-- Database: `design tour`
--

-- --------------------------------------------------------

--
-- Table structure for table `bus`
--

CREATE TABLE `bus` (
  `Bus_NO` int(5) NOT NULL,
  `Source_Place` varchar(20) DEFAULT NULL,
  `Destination` varchar(20) DEFAULT NULL,
  `Couch_Type` varchar(10) DEFAULT NULL,
  `Fair` int(4) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bus`
--

INSERT INTO `bus` (`Bus_NO`, `Source_Place`, `Destination`, `Couch_Type`, `Fair`) VALUES
(1, 'Rajshahi', 'Dhaka', 'AC', 1050),
(2, 'Rajshahi', 'Khulna', 'AC', 1050),
(3, 'Rajshahi', 'Chattogram', 'AC', 2100),
(4, 'Rajshahi', 'Sylhet', 'AC', 1500),
(5, 'Rajshahi', 'Natore', 'AC', 100),
(6, 'Rajshahi', 'Sirajgonj', 'AC', 500),
(7, 'Rajshahi', 'Pabna', 'AC', 300),
(8, 'Rajshahi', 'Chapai', 'AC', 200),
(9, 'Rajshahi', 'Noagaon', 'AC', 400),
(10, 'Rajshahi', 'Bogura', 'AC', 600),
(11, 'Rajshahi', 'Dhaka', 'Non AC', 750),
(12, 'Rajshahi', 'Khulna', 'Non AC', 750),
(13, 'Rajshahi', 'Chattogram', 'Non AC', 1500),
(14, 'Rajshahi', 'Sylhet', 'Non AC', 1200),
(15, 'Rajshahi', 'Natore', 'Non AC', 80),
(16, 'Rajshahi', 'Sirajgonj', 'Non AC', 350),
(17, 'Rajshahi', 'Pabna', 'Non AC', 200),
(18, 'Rajshahi', 'Chapai', 'Non AC', 150),
(19, 'Rajshahi', 'Noagaon', 'Non AC', 250),
(20, 'Rajshahi', 'Bogura', 'Non AC', 400),
(21, 'Dhaka', 'Rajshahi', 'AC', 1050),
(22, 'Rajshahi', 'Dhaka', 'AC', 1000),
(23, 'Chattogram', 'Dhaka', 'AC', 1000),
(24, 'Dhaka', 'Chattogram', 'Non AC', 750),
(25, 'Chattogram', 'Dhaka', 'Non AC', 750);

-- --------------------------------------------------------

--
-- Table structure for table `bus_pnr`
--

CREATE TABLE `bus_pnr` (
  `Bus_NO` int(5) NOT NULL,
  `Pnr_NO` int(9) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bus_pnr`
--

INSERT INTO `bus_pnr` (`Bus_NO`, `Pnr_NO`) VALUES
(1, 1000001),
(22, 1000002),
(22, 1000003),
(22, 1000004),
(21, 1000005),
(21, 1000006),
(21, 1000007),
(19, 1000008);

-- --------------------------------------------------------

--
-- Table structure for table `bus_tic`
--

CREATE TABLE `bus_tic` (
  `Bus_NO` int(5) NOT NULL,
  `Ticket_NO` int(9) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bus_tic`
--

INSERT INTO `bus_tic` (`Bus_NO`, `Ticket_NO`) VALUES
(1, 8),
(22, 2),
(22, 3),
(22, 4),
(21, 1),
(21, 5),
(21, 10),
(19, 9);

-- --------------------------------------------------------

--
-- Table structure for table `cancellation`
--

CREATE TABLE `cancellation` (
  `Pnr_NO` int(9) NOT NULL,
  `No_Of_Seats` int(8) DEFAULT NULL,
  `Address` varchar(50) DEFAULT NULL,
  `Contact_NO` int(10) DEFAULT NULL,
  `Status_IS` char(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `cancellation`
--

INSERT INTO `cancellation` (`Pnr_NO`, `No_Of_Seats`, `Address`, `Contact_NO`, `Status_IS`) VALUES
(1000005, 2, 'Khulipara, Rajshahi', 1738661234, 'YES'),
(1000006, 1, 'Sobjipara, Rajshahi', 1738665678, 'YES'),
(1000007, 9, 'Padma Abashik, Rajshahi', 1738612345, 'YES'),
(1000008, 10, 'Reshom Potti, Rajshahi', 1738678912, 'YES');

-- --------------------------------------------------------

--
-- Table structure for table `passenger`
--

CREATE TABLE `passenger` (
  `Ticket_NO` int(9) NOT NULL,
  `Name` varchar(40) DEFAULT NULL,
  `Age` int(4) DEFAULT NULL,
  `Sex` char(4) NOT NULL,
  `Contact_NO` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `passenger`
--

INSERT INTO `passenger` (`Ticket_NO`, `Name`, `Age`, `Sex`, `Contact_NO`) VALUES
(7, 'Jion', 18, 'M', 1738612345),
(5, 'Yeasir', 15, 'M', 1738661234),
(2, 'Antor', 14, 'M', 1738663123),
(3, 'Susmita', 12, 'F', 1738663456),
(1, 'NAim', 18, 'M', 1738663624),
(4, 'Sohan', 13, 'M', 1738663789),
(6, 'Abid', 16, 'M', 1738665678),
(8, 'Soumik', 19, 'M', 1738678912);

-- --------------------------------------------------------

--
-- Table structure for table `reservation`
--

CREATE TABLE `reservation` (
  `Pnr_NO` int(9) NOT NULL,
  `No_Of_Seats` int(8) DEFAULT NULL,
  `Address` varchar(50) DEFAULT NULL,
  `Contact_NO` int(10) DEFAULT NULL,
  `Status_IS` char(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `reservation`
--

INSERT INTO `reservation` (`Pnr_NO`, `No_Of_Seats`, `Address`, `Contact_NO`, `Status_IS`) VALUES
(1000001, 3, 'Seroil, Rajshahi', 1738663624, 'YES'),
(1000002, 4, 'Dargapara, Rajshahi', 1738663123, 'YES'),
(1000003, 5, 'Dhanmondi, Dhaka', 1738663456, 'YES'),
(1000004, 6, 'Machuyapara, Rajshahi', 1738663789, 'YES'),
(1000005, 2, 'Khulipara, Rajshahi', 1738661234, 'YES'),
(1000006, 1, 'Sobjipara, Rajshahi', 1738665678, 'YES'),
(1000007, 9, 'Padma Abashik, Rajshahi', 1738612345, 'YES'),
(1000008, 10, 'Reshom Potti, Rajshahi', 2147483647, 'YES');

-- --------------------------------------------------------

--
-- Table structure for table `ticket`
--

CREATE TABLE `ticket` (
  `Ticket_NO` int(9) NOT NULL,
  `Age` int(4) DEFAULT NULL,
  `Sex` char(4) NOT NULL,
  `Source_Place` varchar(20) DEFAULT NULL,
  `Destination` varchar(20) DEFAULT NULL,
  `Dep_Time` varchar(4) DEFAULT NULL,
  `Journey_Date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `ticket`
--

INSERT INTO `ticket` (`Ticket_NO`, `Age`, `Sex`, `Source_Place`, `Destination`, `Dep_Time`, `Journey_Date`) VALUES
(1, 18, 'M', 'Dhaka', 'Rajshahi', '1200', '2021-07-01'),
(2, 14, 'M', 'Rajshahi', 'Dhaka', '1200', '2021-07-01'),
(3, 12, 'F', 'Rajshahi', 'Dhaka', '1200', '2021-07-01'),
(4, 13, 'M', 'Rajshahi', 'Dhaka', '1200', '2021-07-01'),
(5, 15, 'M', 'Dhaka', 'Rajshahi', '0100', '2021-07-01'),
(6, 16, 'M', 'Dhaka', 'Chattogram', '1200', '2021-07-02'),
(7, 18, 'M', 'Rajshahi', 'Chattogram', '1200', '2021-07-03'),
(8, 19, 'M', 'Rajshahi', 'Dhaka', '0100', '2021-07-04'),
(9, 20, 'M', 'Rajshahi', 'Noagaon', '0100', '2021-07-05'),
(10, 40, 'M', 'Dhaka', 'Rajshahi', '1200', '2021-07-06');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `bus`
--
ALTER TABLE `bus`
  ADD PRIMARY KEY (`Bus_NO`);

--
-- Indexes for table `cancellation`
--
ALTER TABLE `cancellation`
  ADD KEY `Pnr_NO` (`Pnr_NO`),
  ADD KEY `Contact_NO` (`Contact_NO`);

--
-- Indexes for table `passenger`
--
ALTER TABLE `passenger`
  ADD PRIMARY KEY (`Contact_NO`),
  ADD KEY `Ticket_NO` (`Ticket_NO`);

--
-- Indexes for table `reservation`
--
ALTER TABLE `reservation`
  ADD PRIMARY KEY (`Pnr_NO`);

--
-- Indexes for table `ticket`
--
ALTER TABLE `ticket`
  ADD PRIMARY KEY (`Ticket_NO`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `cancellation`
--
ALTER TABLE `cancellation`
  ADD CONSTRAINT `cancellation_ibfk_1` FOREIGN KEY (`Pnr_NO`) REFERENCES `reservation` (`Pnr_NO`),
  ADD CONSTRAINT `cancellation_ibfk_2` FOREIGN KEY (`Contact_NO`) REFERENCES `passenger` (`Contact_NO`);

--
-- Constraints for table `passenger`
--
ALTER TABLE `passenger`
  ADD CONSTRAINT `passenger_ibfk_1` FOREIGN KEY (`Ticket_NO`) REFERENCES `ticket` (`Ticket_NO`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
