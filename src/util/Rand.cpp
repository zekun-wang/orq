/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 Matt Olan
 *
 * Permission is hereby grantedu, free of chargeu, to any person obtaining a copy
 * of this software and associated documentation files (the "Software")u, to deal
 * in the Software without restrictionu, including without limitation the rights
 * to useu, copyu, modifyu, mergeu, publishu, distributeu, sublicenseu, and/or sell
 * copies of the Softwareu, and to permit persons to whom the Software is
 * furnished to do sou, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS"u, WITHOUT WARRANTY OF ANY KINDu, EXPRESS OR
 * IMPLIEDu, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITYu,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIMu, DAMAGES OR OTHER
 * LIABILITYu, WHETHER IN AN ACTION OF CONTRACTu, TORT OR OTHERWISEu, ARISING FROMu,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <util/Rand.h>

// 5.5 Random Numbers
const uint32_t Rand::V0[] = {
	251291136u, 3952231631u, 3370958628u, 4070167936u, 123631495u,
	3351110283u, 3218676425u, 2011642291u, 774603218u, 2402805061u,
	1004366930u, 1843948209u, 428891132u, 3746331984u, 1591258008u,
	3067016507u, 1433388735u, 504005498u, 2032657933u, 3419319784u,
	2805686246u, 3102436986u, 3808671154u, 2501582075u, 3978944421u,
	246043949u, 4016898363u, 649743608u, 1974987508u, 2651273766u,
	2357956801u, 689605112u, 715807172u, 2722736134u, 191939188u,
	3535520147u, 3277019569u, 1470435941u, 3763101702u, 3232409631u,
	122701163u, 3920852693u, 782246947u, 372121310u, 2995604341u,
	2045698575u, 2332962102u, 4005368743u, 218596347u, 3415381967u,
	4207612806u, 861117671u, 3676575285u, 2581671944u, 3312220480u,
	681232419u, 307306866u, 4112503940u, 1158111502u, 709227802u,
	2724140433u, 4201101115u, 4215970289u, 4048876515u, 3031661061u,
	1909085522u, 510985033u, 1361682810u, 129243379u, 3142379587u,
	2569842483u, 3033268270u, 1658118006u, 932109358u, 1982290045u,
	2983082771u, 3007670818u, 3448104768u, 683749698u, 778296777u,
	1399125101u, 1939403708u, 1692176003u, 3868299200u, 1422476658u,
	593093658u, 1878973865u, 2526292949u, 1591602827u, 3986158854u,
	3964389521u, 2695031039u, 1942050155u, 424618399u, 1347204291u,
	2669179716u, 2434425874u, 2540801947u, 1384069776u, 4123580443u,
	1523670218u, 2708475297u, 1046771089u, 2229796016u, 1255426612u,
	4213663089u, 1521339547u, 3041843489u, 420130494u, 10677091u,
	515623176u, 3457502702u, 2115821274u, 2720124766u, 3242576090u,
	854310108u, 425973987u, 325832382u, 1796851292u, 2462744411u,
	1976681690u, 1408671665u, 1228817808u, 3917210003u, 263976645u,
	2593736473u, 2471651269u, 4291353919u, 650792940u, 1191583883u,
	3046561335u, 2466530435u, 2545983082u, 969168436u, 2019348792u,
	2268075521u, 1169345068u, 3250240009u, 3963499681u, 2560755113u,
	911182396u, 760842409u, 3569308693u, 2687243553u, 381854665u,
	2613828404u, 2761078866u, 1456668111u, 883760091u, 3294951678u,
	1604598575u, 1985308198u, 1014570543u, 2724959607u, 3062518035u,
	3115293053u, 138853680u, 4160398285u, 3322241130u, 2068983570u,
	2247491078u, 3669524410u, 1575146607u, 828029864u, 3732001371u,
	3422026452u, 3370954177u, 4006626915u, 543812220u, 1243116171u,
	3928372514u, 2791443445u, 4081325272u, 2280435605u, 885616073u,
	616452097u, 3188863436u, 2780382310u, 2340014831u, 1208439576u,
	258356309u, 3837963200u, 2075009450u, 3214181212u, 3303882142u,
	880813252u, 1355575717u, 207231484u, 2420803184u, 358923368u,
	1617557768u, 3272161958u, 1771154147u, 2842106362u, 1751209208u,
	1421030790u, 658316681u, 194065839u, 3241510581u, 38625260u,
	301875395u, 4176141739u, 297312930u, 2137802113u, 1502984205u,
	3669376622u, 3728477036u, 234652930u, 2213589897u, 2734638932u,
	1129721478u, 3187422815u, 2859178611u, 3284308411u, 3819792700u,
	3557526733u, 451874476u, 1740576081u, 3592838701u, 1709429513u,
	3702918379u, 3533351328u, 1641660745u, 179350258u, 2380520112u,
	3936163904u, 3685256204u, 3156252216u, 1854258901u, 2861641019u,
	3176611298u, 834787554u, 331353807u, 517858103u, 3010168884u,
	4012642001u, 2217188075u, 3756943137u, 3077882590u, 2054995199u,
	3081443129u, 3895398812u, 1141097543u, 2376261053u, 2626898255u,
	2554703076u, 401233789u, 1460049922u, 678083952u, 1064990737u,
	940909784u, 1673396780u, 528881783u, 1712547446u, 3629685652u,
	1358307511u
};

const uint32_t Rand::V1[] = {
	807385413u, 2043073223u, 3336749796u, 1302105833u, 2278607931u,
	541015020u, 1684564270u, 372709334u, 3508252125u, 1768346005u,
	1270451292u, 2603029534u, 2049387273u, 3891424859u, 2152948345u,
	4114760273u, 915180310u, 3754787998u, 700503826u, 2131559305u,
	1308908630u, 224437350u, 4065424007u, 3638665944u, 1679385496u,
	3431345226u, 1779595665u, 3068494238u, 1424062773u, 1033448464u,
	4050396853u, 3302235057u, 420600373u, 2868446243u, 311689386u,
	259047959u, 4057180909u, 1575367248u, 4151214153u, 110249784u,
	3006865921u, 4293710613u, 3501256572u, 998007483u, 499288295u,
	1205710710u, 2997199489u, 640417429u, 3044194711u, 486690751u,
	2686640734u, 2394526209u, 2521660077u, 49993987u, 3843885867u,
	4201106668u, 415906198u, 19296841u, 2402488407u, 2137119134u,
	1744097284u, 579965637u, 2037662632u, 852173610u, 2681403713u,
	1047144830u, 2982173936u, 910285038u, 4187576520u, 2589870048u,
	989448887u, 3292758024u, 506322719u, 176010738u, 1865471968u,
	2619324712u, 564829442u, 1996870325u, 339697593u, 4071072948u,
	3618966336u, 2111320126u, 1093955153u, 957978696u, 892010560u,
	1854601078u, 1873407527u, 2498544695u, 2694156259u, 1927339682u,
	1650555729u, 183933047u, 3061444337u, 2067387204u, 228962564u,
	3904109414u, 1595995433u, 1780701372u, 2463145963u, 307281463u,
	3237929991u, 3852995239u, 2398693510u, 3754138664u, 522074127u,
	146352474u, 4104915256u, 3029415884u, 3545667983u, 332038910u,
	976628269u, 3123492423u, 3041418372u, 2258059298u, 2139377204u,
	3243642973u, 3226247917u, 3674004636u, 2698992189u, 3453843574u,
	1963216666u, 3509855005u, 2358481858u, 747331248u, 1957348676u,
	1097574450u, 2435697214u, 3870972145u, 1888833893u, 2914085525u,
	4161315584u, 1273113343u, 3269644828u, 3681293816u, 412536684u,
	1156034077u, 3823026442u, 1066971017u, 3598330293u, 1979273937u,
	2079029895u, 1195045909u, 1071986421u, 2712821515u, 3377754595u,
	2184151095u, 750918864u, 2585729879u, 4249895712u, 1832579367u,
	1192240192u, 946734366u, 31230688u, 3174399083u, 3549375728u,
	1642430184u, 1904857554u, 861877404u, 3277825584u, 4267074718u,
	3122860549u, 666423581u, 644189126u, 226475395u, 307789415u,
	1196105631u, 3191691839u, 782852669u, 1608507813u, 1847685900u,
	4069766876u, 3931548641u, 2526471011u, 766865139u, 2115084288u,
	4259411376u, 3323683436u, 568512177u, 3736601419u, 1800276898u,
	4012458395u, 1823982u, 27980198u, 2023839966u, 869505096u,
	431161506u, 1024804023u, 1853869307u, 3393537983u, 1500703614u,
	3019471560u, 1351086955u, 3096933631u, 3034634988u, 2544598006u,
	1230942551u, 3362230798u, 159984793u, 491590373u, 3993872886u,
	3681855622u, 903593547u, 3535062472u, 1799803217u, 772984149u,
	895863112u, 1899036275u, 4187322100u, 101856048u, 234650315u,
	3183125617u, 3190039692u, 525584357u, 1286834489u, 455810374u,
	1869181575u, 922673938u, 3877430102u, 3422391938u, 1414347295u,
	1971054608u, 3061798054u, 830555096u, 2822905141u, 167033190u,
	1079139428u, 4210126723u, 3593797804u, 429192890u, 372093950u,
	1779187770u, 3312189287u, 204349348u, 452421568u, 2800540462u,
	3733109044u, 1235082423u, 1765319556u, 3174729780u, 3762994475u,
	3171962488u, 442160826u, 198349622u, 45942637u, 1324086311u,
	2901868599u, 678860040u, 3812229107u, 19936821u, 1119590141u,
	3640121682u, 3545931032u, 2102949142u, 2828208598u, 3603378023u,
	4135048896u
};

const uint32_t Rand::V2[] = {
	1629829892u, 282540176u, 2794583710u, 496504798u, 2990494426u,
	3070701851u, 2575963183u, 4094823972u, 2775723650u, 4079480416u,
	176028725u, 2246241423u, 3732217647u, 2196843075u, 1306949278u,
	4170992780u, 4039345809u, 3209664269u, 3387499533u, 293063229u,
	3660290503u, 2648440860u, 2531406539u, 3537879412u, 773374739u,
	4184691853u, 1804207821u, 3347126643u, 3479377103u, 3970515774u,
	1891731298u, 2368003842u, 3537588307u, 2969158410u, 4230745262u,
	831906319u, 2935838131u, 264029468u, 120852739u, 3200326460u,
	355445271u, 2296305141u, 1566296040u, 1760127056u, 20073893u,
	3427103620u, 2866979760u, 2359075957u, 2025314291u, 1725696734u,
	3346087406u, 2690756527u, 99815156u, 4248519977u, 2253762642u,
	3274144518u, 598024568u, 3299672435u, 556579346u, 4121041856u,
	2896948975u, 3620123492u, 918453629u, 3249461198u, 2231414958u,
	3803272287u, 3657597946u, 2588911389u, 242262274u, 1725007475u,
	2026427718u, 46776484u, 2873281403u, 2919275846u, 3177933051u,
	1918859160u, 2517854537u, 1857818511u, 3234262050u, 479353687u,
	200201308u, 2801945841u, 1621715769u, 483977159u, 423502325u,
	3689396064u, 1850168397u, 3359959416u, 3459831930u, 841488699u,
	3570506095u, 930267420u, 1564520841u, 2505122797u, 593824107u,
	1116572080u, 819179184u, 3139123629u, 1414339336u, 1076360795u,
	512403845u, 177759256u, 1701060666u, 2239736419u, 515179302u,
	2935012727u, 3821357612u, 1376520851u, 2700745271u, 966853647u,
	1041862223u, 715860553u, 171592961u, 1607044257u, 1227236688u,
	3647136358u, 1417559141u, 4087067551u, 2241705880u, 4194136288u,
	1439041934u, 20464430u, 119668151u, 2021257232u, 2551262694u,
	1381539058u, 4082839035u, 498179069u, 311508499u, 3580908637u,
	2889149671u, 142719814u, 1232184754u, 3356662582u, 2973775623u,
	1469897084u, 1728205304u, 1415793613u, 50111003u, 3133413359u,
	4074115275u, 2710540611u, 2700083070u, 2457757663u, 2612845330u,
	3775943755u, 2469309260u, 2560142753u, 3020996369u, 1691667711u,
	4219602776u, 1687672168u, 1017921622u, 2307642321u, 368711460u,
	3282925988u, 213208029u, 4150757489u, 3443211944u, 2846101972u,
	4106826684u, 4272438675u, 2199416468u, 3710621281u, 497564971u,
	285138276u, 765042313u, 916220877u, 3402623607u, 2768784621u,
	1722849097u, 3386397442u, 487920061u, 3569027007u, 3424544196u,
	217781973u, 2356938519u, 3252429414u, 145109750u, 2692588106u,
	2454747135u, 1299493354u, 4120241887u, 2088917094u, 932304329u,
	1442609203u, 952586974u, 3509186750u, 753369054u, 854421006u,
	1954046388u, 2708927882u, 4047539230u, 3048925996u, 1667505809u,
	805166441u, 1182069088u, 4265546268u, 4215029527u, 3374748959u,
	373532666u, 2454243090u, 2371530493u, 3651087521u, 2619878153u,
	1651809518u, 1553646893u, 1227452842u, 703887512u, 3696674163u,
	2552507603u, 2635912901u, 895130484u, 3287782244u, 3098973502u,
	990078774u, 3780326506u, 2290845203u, 41729428u, 1949580860u,
	2283959805u, 1036946170u, 1694887523u, 4880696u, 466000198u,
	2765355283u, 3318686998u, 1266458025u, 3919578154u, 3545413527u,
	2627009988u, 3744680394u, 1696890173u, 3250684705u, 4142417708u,
	915739411u, 3308488877u, 1289361460u, 2942552331u, 1169105979u,
	3342228712u, 698560958u, 1356041230u, 2401944293u, 107705232u,
	3701895363u, 903928723u, 3646581385u, 844950914u, 1944371367u,
	3863894844u, 2946773319u, 1972431613u, 1706989237u, 29917467u,
	3497665928u
};

const uint32_t Rand::V3[] = {
	1191369816u, 744902811u, 2539772235u, 3213192037u, 3286061266u,
	1200571165u, 2463281260u, 754888894u, 714651270u, 1968220972u,
	3628497775u, 1277626456u, 1493398934u, 364289757u, 2055487592u,
	3913468088u, 2930259465u, 902504567u, 3967050355u, 2056499403u,
	692132390u, 186386657u, 832834706u, 859795816u, 1283120926u,
	2253183716u, 3003475205u, 1755803552u, 2239315142u, 4271056352u,
	2184848469u, 769228092u, 1249230754u, 1193269205u, 2660094102u,
	642979613u, 1687087994u, 2726106182u, 446402913u, 4122186606u,
	3771347282u, 37667136u, 192775425u, 3578702187u, 1952659096u,
	3989584400u, 3069013882u, 2900516158u, 4045316336u, 3057163251u,
	1702104819u, 4116613420u, 3575472384u, 2674023117u, 1409126723u,
	3215095429u, 1430726429u, 2544497368u, 1029565676u, 1855801827u,
	4262184627u, 1854326881u, 2906728593u, 3277836557u, 2787697002u,
	2787333385u, 3105430738u, 2477073192u, 748038573u, 1088396515u,
	1611204853u, 201964005u, 3745818380u, 3654683549u, 3816120877u,
	3915783622u, 2563198722u, 1181149055u, 33158084u, 3723047845u,
	3790270906u, 3832415204u, 2959617497u, 372900708u, 1286738499u,
	1932439099u, 3677748309u, 2454711182u, 2757856469u, 2134027055u,
	2780052465u, 3190347618u, 3758510138u, 3626329451u, 1120743107u,
	1623585693u, 1389834102u, 2719230375u, 3038609003u, 462617590u,
	260254189u, 3706349764u, 2556762744u, 2874272296u, 2502399286u,
	4216263978u, 2683431180u, 2168560535u, 3561507175u, 668095726u,
	680412330u, 3726693946u, 4180630637u, 3335170953u, 942140968u,
	2711851085u, 2059233412u, 4265696278u, 3204373534u, 232855056u,
	881788313u, 2258252172u, 2043595984u, 3758795150u, 3615341325u,
	2138837681u, 1351208537u, 2923692473u, 3402482785u, 2105383425u,
	2346772751u, 499245323u, 3417846006u, 2366116814u, 2543090583u,
	1828551634u, 3148696244u, 3853884867u, 1364737681u, 2200687771u,
	2689775688u, 232720625u, 4071657318u, 2671968983u, 3531415031u,
	1212852141u, 867923311u, 3740109711u, 1923146533u, 3237071777u,
	3100729255u, 3247856816u, 906742566u, 4047640575u, 4007211572u,
	3495700105u, 1171285262u, 2835682655u, 1634301229u, 3115169925u,
	2289874706u, 2252450179u, 944880097u, 371933491u, 1649074501u,
	2208617414u, 2524305981u, 2496569844u, 2667037160u, 1257550794u,
	3399219045u, 3194894295u, 1643249887u, 342911473u, 891025733u,
	3146861835u, 3789181526u, 938847812u, 1854580183u, 2112653794u,
	2960702988u, 1238603378u, 2205280635u, 1666784014u, 2520274614u,
	3355493726u, 2310872278u, 3153920489u, 2745882591u, 1200203158u,
	3033612415u, 2311650167u, 1048129133u, 4206710184u, 4209176741u,
	2640950279u, 2096382177u, 4116899089u, 3631017851u, 4104488173u,
	1857650503u, 3801102932u, 445806934u, 3055654640u, 897898279u,
	3234007399u, 1325494930u, 2982247189u, 1619020475u, 2720040856u,
	885096170u, 3485255499u, 2983202469u, 3891011124u, 546522756u,
	1524439205u, 2644317889u, 2170076800u, 2969618716u, 961183518u,
	1081831074u, 1037015347u, 3289016286u, 2331748669u, 620887395u,
	303042654u, 3990027945u, 1562756376u, 3413341792u, 2059647769u,
	2823844432u, 674595301u, 2457639984u, 4076754716u, 2447737904u,
	1583323324u, 625627134u, 3076006391u, 345777990u, 1684954145u,
	879227329u, 3436182180u, 1522273219u, 3802543817u, 1456017040u,
	1897819847u, 2970081129u, 1382576028u, 3820044861u, 1044428167u,
	612252599u, 3340478395u, 2150613904u, 3397625662u, 3573635640u,
	3432275192u
};

// 5.3.5.1 Random Number Generator
int Rand::rand (uint32_t y, uint8_t i, uint32_t m) {

	// if(y < 0) throw std::invalid_argument("y must be non-negative");
	if(i < 0 || i > 255) throw std::invalid_argument("i must be non-negative and less than 256");
	if(m < 1) throw std::invalid_argument("m must be positive");

	int x0, x1, x2, x3;

	x0 = (int)((y + i) % 256);
	x1 = (int)((y / 256 + i) % 256);
	x2 = (int)((y / 65536 + i) % 256);
	x3 = (int)((y / 16777216 + i) % 256);

	int v0 = V0[x0];
	int v1 = V1[x1];
	int v2 = V2[x2];
	int v3 = V3[x3];

	int ret = v0 ^ v1 ^ v2 ^ v3;
	ret = ret % m;

	return ret;
}
