#include <gtest/gtest.h>

#include "number/Figurate.h"
using number::isSquare;

TEST(Figurate, isSquare) {
  // Check first 512 numbers, which is enough to go through the mod 256
  // characterization twice
  EXPECT_TRUE(isSquare(0));
  EXPECT_TRUE(isSquare(1));
  EXPECT_FALSE(isSquare(2));
  EXPECT_FALSE(isSquare(3));
  EXPECT_TRUE(isSquare(4));
  EXPECT_FALSE(isSquare(5));
  EXPECT_FALSE(isSquare(6));
  EXPECT_FALSE(isSquare(7));
  EXPECT_FALSE(isSquare(8));
  EXPECT_TRUE(isSquare(9));
  EXPECT_FALSE(isSquare(10));
  EXPECT_FALSE(isSquare(11));
  EXPECT_FALSE(isSquare(12));
  EXPECT_FALSE(isSquare(13));
  EXPECT_FALSE(isSquare(14));
  EXPECT_FALSE(isSquare(15));
  EXPECT_TRUE(isSquare(16));
  EXPECT_FALSE(isSquare(17));
  EXPECT_FALSE(isSquare(18));
  EXPECT_FALSE(isSquare(19));
  EXPECT_FALSE(isSquare(20));
  EXPECT_FALSE(isSquare(21));
  EXPECT_FALSE(isSquare(22));
  EXPECT_FALSE(isSquare(23));
  EXPECT_FALSE(isSquare(24));
  EXPECT_TRUE(isSquare(25));
  EXPECT_FALSE(isSquare(26));
  EXPECT_FALSE(isSquare(27));
  EXPECT_FALSE(isSquare(28));
  EXPECT_FALSE(isSquare(29));
  EXPECT_FALSE(isSquare(30));
  EXPECT_FALSE(isSquare(31));
  EXPECT_FALSE(isSquare(32));
  EXPECT_FALSE(isSquare(33));
  EXPECT_FALSE(isSquare(34));
  EXPECT_FALSE(isSquare(35));
  EXPECT_TRUE(isSquare(36));
  EXPECT_FALSE(isSquare(37));
  EXPECT_FALSE(isSquare(38));
  EXPECT_FALSE(isSquare(39));
  EXPECT_FALSE(isSquare(40));
  EXPECT_FALSE(isSquare(41));
  EXPECT_FALSE(isSquare(42));
  EXPECT_FALSE(isSquare(43));
  EXPECT_FALSE(isSquare(44));
  EXPECT_FALSE(isSquare(45));
  EXPECT_FALSE(isSquare(46));
  EXPECT_FALSE(isSquare(47));
  EXPECT_FALSE(isSquare(48));
  EXPECT_TRUE(isSquare(49));
  EXPECT_FALSE(isSquare(50));
  EXPECT_FALSE(isSquare(51));
  EXPECT_FALSE(isSquare(52));
  EXPECT_FALSE(isSquare(53));
  EXPECT_FALSE(isSquare(54));
  EXPECT_FALSE(isSquare(55));
  EXPECT_FALSE(isSquare(56));
  EXPECT_FALSE(isSquare(57));
  EXPECT_FALSE(isSquare(58));
  EXPECT_FALSE(isSquare(59));
  EXPECT_FALSE(isSquare(60));
  EXPECT_FALSE(isSquare(61));
  EXPECT_FALSE(isSquare(62));
  EXPECT_FALSE(isSquare(63));
  EXPECT_TRUE(isSquare(64));
  EXPECT_FALSE(isSquare(65));
  EXPECT_FALSE(isSquare(66));
  EXPECT_FALSE(isSquare(67));
  EXPECT_FALSE(isSquare(68));
  EXPECT_FALSE(isSquare(69));
  EXPECT_FALSE(isSquare(70));
  EXPECT_FALSE(isSquare(71));
  EXPECT_FALSE(isSquare(72));
  EXPECT_FALSE(isSquare(73));
  EXPECT_FALSE(isSquare(74));
  EXPECT_FALSE(isSquare(75));
  EXPECT_FALSE(isSquare(76));
  EXPECT_FALSE(isSquare(77));
  EXPECT_FALSE(isSquare(78));
  EXPECT_FALSE(isSquare(79));
  EXPECT_FALSE(isSquare(80));
  EXPECT_TRUE(isSquare(81));
  EXPECT_FALSE(isSquare(82));
  EXPECT_FALSE(isSquare(83));
  EXPECT_FALSE(isSquare(84));
  EXPECT_FALSE(isSquare(85));
  EXPECT_FALSE(isSquare(86));
  EXPECT_FALSE(isSquare(87));
  EXPECT_FALSE(isSquare(88));
  EXPECT_FALSE(isSquare(89));
  EXPECT_FALSE(isSquare(90));
  EXPECT_FALSE(isSquare(91));
  EXPECT_FALSE(isSquare(92));
  EXPECT_FALSE(isSquare(93));
  EXPECT_FALSE(isSquare(94));
  EXPECT_FALSE(isSquare(95));
  EXPECT_FALSE(isSquare(96));
  EXPECT_FALSE(isSquare(97));
  EXPECT_FALSE(isSquare(98));
  EXPECT_FALSE(isSquare(99));
  EXPECT_TRUE(isSquare(100));
  EXPECT_FALSE(isSquare(101));
  EXPECT_FALSE(isSquare(102));
  EXPECT_FALSE(isSquare(103));
  EXPECT_FALSE(isSquare(104));
  EXPECT_FALSE(isSquare(105));
  EXPECT_FALSE(isSquare(106));
  EXPECT_FALSE(isSquare(107));
  EXPECT_FALSE(isSquare(108));
  EXPECT_FALSE(isSquare(109));
  EXPECT_FALSE(isSquare(110));
  EXPECT_FALSE(isSquare(111));
  EXPECT_FALSE(isSquare(112));
  EXPECT_FALSE(isSquare(113));
  EXPECT_FALSE(isSquare(114));
  EXPECT_FALSE(isSquare(115));
  EXPECT_FALSE(isSquare(116));
  EXPECT_FALSE(isSquare(117));
  EXPECT_FALSE(isSquare(118));
  EXPECT_FALSE(isSquare(119));
  EXPECT_FALSE(isSquare(120));
  EXPECT_TRUE(isSquare(121));
  EXPECT_FALSE(isSquare(122));
  EXPECT_FALSE(isSquare(123));
  EXPECT_FALSE(isSquare(124));
  EXPECT_FALSE(isSquare(125));
  EXPECT_FALSE(isSquare(126));
  EXPECT_FALSE(isSquare(127));
  EXPECT_FALSE(isSquare(128));
  EXPECT_FALSE(isSquare(129));
  EXPECT_FALSE(isSquare(130));
  EXPECT_FALSE(isSquare(131));
  EXPECT_FALSE(isSquare(132));
  EXPECT_FALSE(isSquare(133));
  EXPECT_FALSE(isSquare(134));
  EXPECT_FALSE(isSquare(135));
  EXPECT_FALSE(isSquare(136));
  EXPECT_FALSE(isSquare(137));
  EXPECT_FALSE(isSquare(138));
  EXPECT_FALSE(isSquare(139));
  EXPECT_FALSE(isSquare(140));
  EXPECT_FALSE(isSquare(141));
  EXPECT_FALSE(isSquare(142));
  EXPECT_FALSE(isSquare(143));
  EXPECT_TRUE(isSquare(144));
  EXPECT_FALSE(isSquare(145));
  EXPECT_FALSE(isSquare(146));
  EXPECT_FALSE(isSquare(147));
  EXPECT_FALSE(isSquare(148));
  EXPECT_FALSE(isSquare(149));
  EXPECT_FALSE(isSquare(150));
  EXPECT_FALSE(isSquare(151));
  EXPECT_FALSE(isSquare(152));
  EXPECT_FALSE(isSquare(153));
  EXPECT_FALSE(isSquare(154));
  EXPECT_FALSE(isSquare(155));
  EXPECT_FALSE(isSquare(156));
  EXPECT_FALSE(isSquare(157));
  EXPECT_FALSE(isSquare(158));
  EXPECT_FALSE(isSquare(159));
  EXPECT_FALSE(isSquare(160));
  EXPECT_FALSE(isSquare(161));
  EXPECT_FALSE(isSquare(162));
  EXPECT_FALSE(isSquare(163));
  EXPECT_FALSE(isSquare(164));
  EXPECT_FALSE(isSquare(165));
  EXPECT_FALSE(isSquare(166));
  EXPECT_FALSE(isSquare(167));
  EXPECT_FALSE(isSquare(168));
  EXPECT_TRUE(isSquare(169));
  EXPECT_FALSE(isSquare(170));
  EXPECT_FALSE(isSquare(171));
  EXPECT_FALSE(isSquare(172));
  EXPECT_FALSE(isSquare(173));
  EXPECT_FALSE(isSquare(174));
  EXPECT_FALSE(isSquare(175));
  EXPECT_FALSE(isSquare(176));
  EXPECT_FALSE(isSquare(177));
  EXPECT_FALSE(isSquare(178));
  EXPECT_FALSE(isSquare(179));
  EXPECT_FALSE(isSquare(180));
  EXPECT_FALSE(isSquare(181));
  EXPECT_FALSE(isSquare(182));
  EXPECT_FALSE(isSquare(183));
  EXPECT_FALSE(isSquare(184));
  EXPECT_FALSE(isSquare(185));
  EXPECT_FALSE(isSquare(186));
  EXPECT_FALSE(isSquare(187));
  EXPECT_FALSE(isSquare(188));
  EXPECT_FALSE(isSquare(189));
  EXPECT_FALSE(isSquare(190));
  EXPECT_FALSE(isSquare(191));
  EXPECT_FALSE(isSquare(192));
  EXPECT_FALSE(isSquare(193));
  EXPECT_FALSE(isSquare(194));
  EXPECT_FALSE(isSquare(195));
  EXPECT_TRUE(isSquare(196));
  EXPECT_FALSE(isSquare(197));
  EXPECT_FALSE(isSquare(198));
  EXPECT_FALSE(isSquare(199));
  EXPECT_FALSE(isSquare(200));
  EXPECT_FALSE(isSquare(201));
  EXPECT_FALSE(isSquare(202));
  EXPECT_FALSE(isSquare(203));
  EXPECT_FALSE(isSquare(204));
  EXPECT_FALSE(isSquare(205));
  EXPECT_FALSE(isSquare(206));
  EXPECT_FALSE(isSquare(207));
  EXPECT_FALSE(isSquare(208));
  EXPECT_FALSE(isSquare(209));
  EXPECT_FALSE(isSquare(210));
  EXPECT_FALSE(isSquare(211));
  EXPECT_FALSE(isSquare(212));
  EXPECT_FALSE(isSquare(213));
  EXPECT_FALSE(isSquare(214));
  EXPECT_FALSE(isSquare(215));
  EXPECT_FALSE(isSquare(216));
  EXPECT_FALSE(isSquare(217));
  EXPECT_FALSE(isSquare(218));
  EXPECT_FALSE(isSquare(219));
  EXPECT_FALSE(isSquare(220));
  EXPECT_FALSE(isSquare(221));
  EXPECT_FALSE(isSquare(222));
  EXPECT_FALSE(isSquare(223));
  EXPECT_FALSE(isSquare(224));
  EXPECT_TRUE(isSquare(225));
  EXPECT_FALSE(isSquare(226));
  EXPECT_FALSE(isSquare(227));
  EXPECT_FALSE(isSquare(228));
  EXPECT_FALSE(isSquare(229));
  EXPECT_FALSE(isSquare(230));
  EXPECT_FALSE(isSquare(231));
  EXPECT_FALSE(isSquare(232));
  EXPECT_FALSE(isSquare(233));
  EXPECT_FALSE(isSquare(234));
  EXPECT_FALSE(isSquare(235));
  EXPECT_FALSE(isSquare(236));
  EXPECT_FALSE(isSquare(237));
  EXPECT_FALSE(isSquare(238));
  EXPECT_FALSE(isSquare(239));
  EXPECT_FALSE(isSquare(240));
  EXPECT_FALSE(isSquare(241));
  EXPECT_FALSE(isSquare(242));
  EXPECT_FALSE(isSquare(243));
  EXPECT_FALSE(isSquare(244));
  EXPECT_FALSE(isSquare(245));
  EXPECT_FALSE(isSquare(246));
  EXPECT_FALSE(isSquare(247));
  EXPECT_FALSE(isSquare(248));
  EXPECT_FALSE(isSquare(249));
  EXPECT_FALSE(isSquare(250));
  EXPECT_FALSE(isSquare(251));
  EXPECT_FALSE(isSquare(252));
  EXPECT_FALSE(isSquare(253));
  EXPECT_FALSE(isSquare(254));
  EXPECT_FALSE(isSquare(255));
  EXPECT_TRUE(isSquare(256));
  EXPECT_FALSE(isSquare(257));
  EXPECT_FALSE(isSquare(258));
  EXPECT_FALSE(isSquare(259));
  EXPECT_FALSE(isSquare(260));
  EXPECT_FALSE(isSquare(261));
  EXPECT_FALSE(isSquare(262));
  EXPECT_FALSE(isSquare(263));
  EXPECT_FALSE(isSquare(264));
  EXPECT_FALSE(isSquare(265));
  EXPECT_FALSE(isSquare(266));
  EXPECT_FALSE(isSquare(267));
  EXPECT_FALSE(isSquare(268));
  EXPECT_FALSE(isSquare(269));
  EXPECT_FALSE(isSquare(270));
  EXPECT_FALSE(isSquare(271));
  EXPECT_FALSE(isSquare(272));
  EXPECT_FALSE(isSquare(273));
  EXPECT_FALSE(isSquare(274));
  EXPECT_FALSE(isSquare(275));
  EXPECT_FALSE(isSquare(276));
  EXPECT_FALSE(isSquare(277));
  EXPECT_FALSE(isSquare(278));
  EXPECT_FALSE(isSquare(279));
  EXPECT_FALSE(isSquare(280));
  EXPECT_FALSE(isSquare(281));
  EXPECT_FALSE(isSquare(282));
  EXPECT_FALSE(isSquare(283));
  EXPECT_FALSE(isSquare(284));
  EXPECT_FALSE(isSquare(285));
  EXPECT_FALSE(isSquare(286));
  EXPECT_FALSE(isSquare(287));
  EXPECT_FALSE(isSquare(288));
  EXPECT_TRUE(isSquare(289));
  EXPECT_FALSE(isSquare(290));
  EXPECT_FALSE(isSquare(291));
  EXPECT_FALSE(isSquare(292));
  EXPECT_FALSE(isSquare(293));
  EXPECT_FALSE(isSquare(294));
  EXPECT_FALSE(isSquare(295));
  EXPECT_FALSE(isSquare(296));
  EXPECT_FALSE(isSquare(297));
  EXPECT_FALSE(isSquare(298));
  EXPECT_FALSE(isSquare(299));
  EXPECT_FALSE(isSquare(300));
  EXPECT_FALSE(isSquare(301));
  EXPECT_FALSE(isSquare(302));
  EXPECT_FALSE(isSquare(303));
  EXPECT_FALSE(isSquare(304));
  EXPECT_FALSE(isSquare(305));
  EXPECT_FALSE(isSquare(306));
  EXPECT_FALSE(isSquare(307));
  EXPECT_FALSE(isSquare(308));
  EXPECT_FALSE(isSquare(309));
  EXPECT_FALSE(isSquare(310));
  EXPECT_FALSE(isSquare(311));
  EXPECT_FALSE(isSquare(312));
  EXPECT_FALSE(isSquare(313));
  EXPECT_FALSE(isSquare(314));
  EXPECT_FALSE(isSquare(315));
  EXPECT_FALSE(isSquare(316));
  EXPECT_FALSE(isSquare(317));
  EXPECT_FALSE(isSquare(318));
  EXPECT_FALSE(isSquare(319));
  EXPECT_FALSE(isSquare(320));
  EXPECT_FALSE(isSquare(321));
  EXPECT_FALSE(isSquare(322));
  EXPECT_FALSE(isSquare(323));
  EXPECT_TRUE(isSquare(324));
  EXPECT_FALSE(isSquare(325));
  EXPECT_FALSE(isSquare(326));
  EXPECT_FALSE(isSquare(327));
  EXPECT_FALSE(isSquare(328));
  EXPECT_FALSE(isSquare(329));
  EXPECT_FALSE(isSquare(330));
  EXPECT_FALSE(isSquare(331));
  EXPECT_FALSE(isSquare(332));
  EXPECT_FALSE(isSquare(333));
  EXPECT_FALSE(isSquare(334));
  EXPECT_FALSE(isSquare(335));
  EXPECT_FALSE(isSquare(336));
  EXPECT_FALSE(isSquare(337));
  EXPECT_FALSE(isSquare(338));
  EXPECT_FALSE(isSquare(339));
  EXPECT_FALSE(isSquare(340));
  EXPECT_FALSE(isSquare(341));
  EXPECT_FALSE(isSquare(342));
  EXPECT_FALSE(isSquare(343));
  EXPECT_FALSE(isSquare(344));
  EXPECT_FALSE(isSquare(345));
  EXPECT_FALSE(isSquare(346));
  EXPECT_FALSE(isSquare(347));
  EXPECT_FALSE(isSquare(348));
  EXPECT_FALSE(isSquare(349));
  EXPECT_FALSE(isSquare(350));
  EXPECT_FALSE(isSquare(351));
  EXPECT_FALSE(isSquare(352));
  EXPECT_FALSE(isSquare(353));
  EXPECT_FALSE(isSquare(354));
  EXPECT_FALSE(isSquare(355));
  EXPECT_FALSE(isSquare(356));
  EXPECT_FALSE(isSquare(357));
  EXPECT_FALSE(isSquare(358));
  EXPECT_FALSE(isSquare(359));
  EXPECT_FALSE(isSquare(360));
  EXPECT_TRUE(isSquare(361));
  EXPECT_FALSE(isSquare(362));
  EXPECT_FALSE(isSquare(363));
  EXPECT_FALSE(isSquare(364));
  EXPECT_FALSE(isSquare(365));
  EXPECT_FALSE(isSquare(366));
  EXPECT_FALSE(isSquare(367));
  EXPECT_FALSE(isSquare(368));
  EXPECT_FALSE(isSquare(369));
  EXPECT_FALSE(isSquare(370));
  EXPECT_FALSE(isSquare(371));
  EXPECT_FALSE(isSquare(372));
  EXPECT_FALSE(isSquare(373));
  EXPECT_FALSE(isSquare(374));
  EXPECT_FALSE(isSquare(375));
  EXPECT_FALSE(isSquare(376));
  EXPECT_FALSE(isSquare(377));
  EXPECT_FALSE(isSquare(378));
  EXPECT_FALSE(isSquare(379));
  EXPECT_FALSE(isSquare(380));
  EXPECT_FALSE(isSquare(381));
  EXPECT_FALSE(isSquare(382));
  EXPECT_FALSE(isSquare(383));
  EXPECT_FALSE(isSquare(384));
  EXPECT_FALSE(isSquare(385));
  EXPECT_FALSE(isSquare(386));
  EXPECT_FALSE(isSquare(387));
  EXPECT_FALSE(isSquare(388));
  EXPECT_FALSE(isSquare(389));
  EXPECT_FALSE(isSquare(390));
  EXPECT_FALSE(isSquare(391));
  EXPECT_FALSE(isSquare(392));
  EXPECT_FALSE(isSquare(393));
  EXPECT_FALSE(isSquare(394));
  EXPECT_FALSE(isSquare(395));
  EXPECT_FALSE(isSquare(396));
  EXPECT_FALSE(isSquare(397));
  EXPECT_FALSE(isSquare(398));
  EXPECT_FALSE(isSquare(399));
  EXPECT_TRUE(isSquare(400));
  EXPECT_FALSE(isSquare(401));
  EXPECT_FALSE(isSquare(402));
  EXPECT_FALSE(isSquare(403));
  EXPECT_FALSE(isSquare(404));
  EXPECT_FALSE(isSquare(405));
  EXPECT_FALSE(isSquare(406));
  EXPECT_FALSE(isSquare(407));
  EXPECT_FALSE(isSquare(408));
  EXPECT_FALSE(isSquare(409));
  EXPECT_FALSE(isSquare(410));
  EXPECT_FALSE(isSquare(411));
  EXPECT_FALSE(isSquare(412));
  EXPECT_FALSE(isSquare(413));
  EXPECT_FALSE(isSquare(414));
  EXPECT_FALSE(isSquare(415));
  EXPECT_FALSE(isSquare(416));
  EXPECT_FALSE(isSquare(417));
  EXPECT_FALSE(isSquare(418));
  EXPECT_FALSE(isSquare(419));
  EXPECT_FALSE(isSquare(420));
  EXPECT_FALSE(isSquare(421));
  EXPECT_FALSE(isSquare(422));
  EXPECT_FALSE(isSquare(423));
  EXPECT_FALSE(isSquare(424));
  EXPECT_FALSE(isSquare(425));
  EXPECT_FALSE(isSquare(426));
  EXPECT_FALSE(isSquare(427));
  EXPECT_FALSE(isSquare(428));
  EXPECT_FALSE(isSquare(429));
  EXPECT_FALSE(isSquare(430));
  EXPECT_FALSE(isSquare(431));
  EXPECT_FALSE(isSquare(432));
  EXPECT_FALSE(isSquare(433));
  EXPECT_FALSE(isSquare(434));
  EXPECT_FALSE(isSquare(435));
  EXPECT_FALSE(isSquare(436));
  EXPECT_FALSE(isSquare(437));
  EXPECT_FALSE(isSquare(438));
  EXPECT_FALSE(isSquare(439));
  EXPECT_FALSE(isSquare(440));
  EXPECT_TRUE(isSquare(441));
  EXPECT_FALSE(isSquare(442));
  EXPECT_FALSE(isSquare(443));
  EXPECT_FALSE(isSquare(444));
  EXPECT_FALSE(isSquare(445));
  EXPECT_FALSE(isSquare(446));
  EXPECT_FALSE(isSquare(447));
  EXPECT_FALSE(isSquare(448));
  EXPECT_FALSE(isSquare(449));
  EXPECT_FALSE(isSquare(450));
  EXPECT_FALSE(isSquare(451));
  EXPECT_FALSE(isSquare(452));
  EXPECT_FALSE(isSquare(453));
  EXPECT_FALSE(isSquare(454));
  EXPECT_FALSE(isSquare(455));
  EXPECT_FALSE(isSquare(456));
  EXPECT_FALSE(isSquare(457));
  EXPECT_FALSE(isSquare(458));
  EXPECT_FALSE(isSquare(459));
  EXPECT_FALSE(isSquare(460));
  EXPECT_FALSE(isSquare(461));
  EXPECT_FALSE(isSquare(462));
  EXPECT_FALSE(isSquare(463));
  EXPECT_FALSE(isSquare(464));
  EXPECT_FALSE(isSquare(465));
  EXPECT_FALSE(isSquare(466));
  EXPECT_FALSE(isSquare(467));
  EXPECT_FALSE(isSquare(468));
  EXPECT_FALSE(isSquare(469));
  EXPECT_FALSE(isSquare(470));
  EXPECT_FALSE(isSquare(471));
  EXPECT_FALSE(isSquare(472));
  EXPECT_FALSE(isSquare(473));
  EXPECT_FALSE(isSquare(474));
  EXPECT_FALSE(isSquare(475));
  EXPECT_FALSE(isSquare(476));
  EXPECT_FALSE(isSquare(477));
  EXPECT_FALSE(isSquare(478));
  EXPECT_FALSE(isSquare(479));
  EXPECT_FALSE(isSquare(480));
  EXPECT_FALSE(isSquare(481));
  EXPECT_FALSE(isSquare(482));
  EXPECT_FALSE(isSquare(483));
  EXPECT_TRUE(isSquare(484));
  EXPECT_FALSE(isSquare(485));
  EXPECT_FALSE(isSquare(486));
  EXPECT_FALSE(isSquare(487));
  EXPECT_FALSE(isSquare(488));
  EXPECT_FALSE(isSquare(489));
  EXPECT_FALSE(isSquare(490));
  EXPECT_FALSE(isSquare(491));
  EXPECT_FALSE(isSquare(492));
  EXPECT_FALSE(isSquare(493));
  EXPECT_FALSE(isSquare(494));
  EXPECT_FALSE(isSquare(495));
  EXPECT_FALSE(isSquare(496));
  EXPECT_FALSE(isSquare(497));
  EXPECT_FALSE(isSquare(498));
  EXPECT_FALSE(isSquare(499));
  EXPECT_FALSE(isSquare(500));
  EXPECT_FALSE(isSquare(501));
  EXPECT_FALSE(isSquare(502));
  EXPECT_FALSE(isSquare(503));
  EXPECT_FALSE(isSquare(504));
  EXPECT_FALSE(isSquare(505));
  EXPECT_FALSE(isSquare(506));
  EXPECT_FALSE(isSquare(507));
  EXPECT_FALSE(isSquare(508));
  EXPECT_FALSE(isSquare(509));
  EXPECT_FALSE(isSquare(510));
  EXPECT_FALSE(isSquare(511));
  EXPECT_FALSE(isSquare(512));

  // Verify all the squares in unsigneds
  for (auto i = 0u; i < (1u << sizeof(unsigned) * 4) - 1; ++i)
    EXPECT_TRUE(isSquare(i * i));
  /*
  // Verify all the squares in unsigned longs
  for (auto i = 0ul; i < (1ul << sizeof(unsigned long) * 4) - 1; ++i)
    EXPECT_TRUE(isSquare(i * i));
  // Verify all the squares in unsigned long longs
  for (auto i = 0ull; i < (1ull << sizeof(unsigned long long) * 4) - 1; ++i)
    EXPECT_TRUE(isSquare(i * i));
  */
}
