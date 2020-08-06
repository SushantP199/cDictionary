#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
 	char word[10];
 	char mean[1000];
 	struct node *next;
};
struct node *start=NULL;
struct node *data (struct node *start);
struct node *display (struct node *start);
struct node *search (struct node *start);
struct node *create (struct node *start,char key[]);
struct hist 
{
 	char wordh[10];
	struct hist *nexth;
};
struct hist *top=NULL;
struct hist *push(struct hist *,char[]);
struct hist *displayh (struct hist *);
int main ()
{
	printf(" ______________________________________________________\n");
	printf("|		*****  WELCOME  *****		       |\n");
	printf("|  		***	 TO    	  ***                  |\n");
	printf("|  		**** cDICTIONARY ****                  |\n");
	printf("|                                                      |\n");
	printf("|			#NOTE :	                       |\n");
	printf("|	@history => Use this key to see HISTOTY        |\n");
	printf("|	@exit    => Use this key to close cDICTIONARY  |\n");
	printf("|______________________________________________________|\n");
	start=data(start);
 	while(start!=NULL)
	       	start=search(start);
 	return 0;
}

struct node *data (struct node *start)
{
	struct node *node1,*node2,*node3,*node4,*node5,*node6,*node7,*node8,*node9,*node10,*node11,*node12,*node13,*node14,*node15,*node16,*node17,*node18,*node19,*node20,
	*node21,*node22,*node23,*node24,*node25,*node26,*node27,*node28,*node29,*node30,*node31,*node32,*node33 ,*node34,*node35,*node36,*node37,*node38,*node39,*node40,
	*node41,*node42,*node43,*node44,*node45,*node46,*node47,*node48,*node49,*node50,*node51,*node52,*node53,*node54,*node55,*node56,*node57,*node58,*node59,*node60,
	*node61,*node62,*node63,*node64,*node65,*node66,*node67,*node68,*node69,*node70,*node71,*node72,*node73,*node74,*node75,*node76,*node77,*node78,*node79,*node80,
	*node81,*node82,*node83,*node84,*node85,*node86,*node87,*node88,*node89,*node90,*node91,*node92,*node93,*node94,*node95,*node96,*node97,*node98,*node99,*node100,
	*node101,*node102,*node103,*node104,*node105,*node106,*node107,*node108,*node109,*node110,*node111,*node112,*node113,*node114,*node115,*node116,*node117,*node118,*node119,*node120,
	*node121,*node122,*node123,*node124,*node125,*node126,*node127,*node128,*node129,*node130;
	node1=(struct node*)malloc(sizeof(struct node));
	node2=(struct node*)malloc(sizeof(struct node));
	node3=(struct node*)malloc(sizeof(struct node));
	node4=(struct node*)malloc(sizeof(struct node));
	node5=(struct node*)malloc(sizeof(struct node));
	node6=(struct node*)malloc(sizeof(struct node));		
	node7=(struct node*)malloc(sizeof(struct node));	
	node8=(struct node*)malloc(sizeof(struct node));
	node9=(struct node*)malloc(sizeof(struct node));
	node10=(struct node*)malloc(sizeof(struct node));
	node11=(struct node*)malloc(sizeof(struct node));
	node12=(struct node*)malloc(sizeof(struct node));
	node13=(struct node*)malloc(sizeof(struct node));
	node14=(struct node*)malloc(sizeof(struct node));
	node15=(struct node*)malloc(sizeof(struct node));
	node16=(struct node*)malloc(sizeof(struct node));
	node17=(struct node*)malloc(sizeof(struct node));
	node18=(struct node*)malloc(sizeof(struct node));
	node19=(struct node*)malloc(sizeof(struct node));
	node20=(struct node*)malloc(sizeof(struct node));
	node21=(struct node*)malloc(sizeof(struct node));
	node22=(struct node*)malloc(sizeof(struct node));
	node23=(struct node*)malloc(sizeof(struct node));
	node24=(struct node*)malloc(sizeof(struct node));
	node25=(struct node*)malloc(sizeof(struct node));
	node26=(struct node*)malloc(sizeof(struct node));
	node27=(struct node*)malloc(sizeof(struct node));
	node28=(struct node*)malloc(sizeof(struct node));
	node29=(struct node*)malloc(sizeof(struct node));
	node30=(struct node*)malloc(sizeof(struct node));	
	node31=(struct node*)malloc(sizeof(struct node));
	node32=(struct node*)malloc(sizeof(struct node));
	node33=(struct node*)malloc(sizeof(struct node));
	node34=(struct node*)malloc(sizeof(struct node));
	node35=(struct node*)malloc(sizeof(struct node));
	node36=(struct node*)malloc(sizeof(struct node));
	node37=(struct node*)malloc(sizeof(struct node));
	node38=(struct node*)malloc(sizeof(struct node));
	node39=(struct node*)malloc(sizeof(struct node));
	node40=(struct node*)malloc(sizeof(struct node));
	node41=(struct node*)malloc(sizeof(struct node));
	node42=(struct node*)malloc(sizeof(struct node));
	node43=(struct node*)malloc(sizeof(struct node));
	node44=(struct node*)malloc(sizeof(struct node));
	node45=(struct node*)malloc(sizeof(struct node));
	node46=(struct node*)malloc(sizeof(struct node));
	node47=(struct node*)malloc(sizeof(struct node));
	node48=(struct node*)malloc(sizeof(struct node));
	node49=(struct node*)malloc(sizeof(struct node));
	node50=(struct node*)malloc(sizeof(struct node));
	node51=(struct node*)malloc(sizeof(struct node));
	node52=(struct node*)malloc(sizeof(struct node));
	node53=(struct node*)malloc(sizeof(struct node));
	node54=(struct node*)malloc(sizeof(struct node));
	node55=(struct node*)malloc(sizeof(struct node));
	node56=(struct node*)malloc(sizeof(struct node));
	node57=(struct node*)malloc(sizeof(struct node));	
	node58=(struct node*)malloc(sizeof(struct node));
	node59=(struct node*)malloc(sizeof(struct node));
	node60=(struct node*)malloc(sizeof(struct node));
	node61=(struct node*)malloc(sizeof(struct node));
	node62=(struct node*)malloc(sizeof(struct node));
	node63=(struct node*)malloc(sizeof(struct node));
	node64=(struct node*)malloc(sizeof(struct node));
	node65=(struct node*)malloc(sizeof(struct node));
	node66=(struct node*)malloc(sizeof(struct node));
	node67=(struct node*)malloc(sizeof(struct node));
	node68=(struct node*)malloc(sizeof(struct node));
	node69=(struct node*)malloc(sizeof(struct node));
	node70=(struct node*)malloc(sizeof(struct node));
	node71=(struct node*)malloc(sizeof(struct node));
	node72=(struct node*)malloc(sizeof(struct node));
	node73=(struct node*)malloc(sizeof(struct node));
	node74=(struct node*)malloc(sizeof(struct node));
	node75=(struct node*)malloc(sizeof(struct node));
	node76=(struct node*)malloc(sizeof(struct node));
	node77=(struct node*)malloc(sizeof(struct node));
	node78=(struct node*)malloc(sizeof(struct node));
	node79=(struct node*)malloc(sizeof(struct node));
	node80=(struct node*)malloc(sizeof(struct node));
	node81=(struct node*)malloc(sizeof(struct node));
	node82=(struct node*)malloc(sizeof(struct node));
	node83=(struct node*)malloc(sizeof(struct node));
	node84=(struct node*)malloc(sizeof(struct node));
	node85=(struct node*)malloc(sizeof(struct node));
	node87=(struct node*)malloc(sizeof(struct node));
	node86=(struct node*)malloc(sizeof(struct node));
	node88=(struct node*)malloc(sizeof(struct node));
	node89=(struct node*)malloc(sizeof(struct node));
	node90=(struct node*)malloc(sizeof(struct node));
	node91=(struct node*)malloc(sizeof(struct node));
	node92=(struct node*)malloc(sizeof(struct node));
	node93=(struct node*)malloc(sizeof(struct node));
	node94=(struct node*)malloc(sizeof(struct node));
	node95=(struct node*)malloc(sizeof(struct node));
	node96=(struct node*)malloc(sizeof(struct node));
	node97=(struct node*)malloc(sizeof(struct node));
	node98=(struct node*)malloc(sizeof(struct node));
	node99=(struct node*)malloc(sizeof(struct node));
	node100=(struct node*)malloc(sizeof(struct node));
	node101=(struct node*)malloc(sizeof(struct node));
	node102=(struct node*)malloc(sizeof(struct node));
	node103=(struct node*)malloc(sizeof(struct node));
	node104=(struct node*)malloc(sizeof(struct node));
	node105=(struct node*)malloc(sizeof(struct node));
	node106=(struct node*)malloc(sizeof(struct node));
	node107=(struct node*)malloc(sizeof(struct node));
	node108=(struct node*)malloc(sizeof(struct node));
	node109=(struct node*)malloc(sizeof(struct node));
	node110=(struct node*)malloc(sizeof(struct node));
	node111=(struct node*)malloc(sizeof(struct node));
	node112=(struct node*)malloc(sizeof(struct node));
	node113=(struct node*)malloc(sizeof(struct node));
	node114=(struct node*)malloc(sizeof(struct node));
	node115=(struct node*)malloc(sizeof(struct node));
	node116=(struct node*)malloc(sizeof(struct node));
	node117=(struct node*)malloc(sizeof(struct node));
	node118=(struct node*)malloc(sizeof(struct node));
	node119=(struct node*)malloc(sizeof(struct node));
	node120=(struct node*)malloc(sizeof(struct node));
	node121=(struct node*)malloc(sizeof(struct node));
	node122=(struct node*)malloc(sizeof(struct node));
	node123=(struct node*)malloc(sizeof(struct node));
	node124=(struct node*)malloc(sizeof(struct node));
	node125=(struct node*)malloc(sizeof(struct node));
	node126=(struct node*)malloc(sizeof(struct node));
	node127=(struct node*)malloc(sizeof(struct node));
	node128=(struct node*)malloc(sizeof(struct node));
	node129=(struct node*)malloc(sizeof(struct node));
	node130=(struct node*)malloc(sizeof(struct node));
	start=node1;
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	node5->next=node6;
	node6->next=node7;
	node7->next=node8;
	node8->next=node9;
	node9->next=node10;
	node10->next=node11;
	node11->next=node12;
	node12->next=node13;
	node13->next=node14;
	node14->next=node15;
	node15->next=node16;
	node16->next=node17;
	node17->next=node18;
	node18->next=node19;
	node19->next=node20;
	node20->next=node21;
	node21->next=node22;
	node22->next=node23;
	node23->next=node24;
	node24->next=node25;
	node25->next=node26;
	node26->next=node27;
	node27->next=node28;
	node28->next=node29;
	node29->next=node30;
	node30->next=node31;
	node31->next=node32;
	node32->next=node33;
	node33->next=node34;	
	node34->next=node35;
	node35->next=node36;
	node36->next=node37;
	node37->next=node38;
	node38->next=node39;
	node39->next=node40;
	node40->next=node41;
	node41->next=node42;
	node42->next=node43;
	node43->next=node44;
	node44->next=node45;
	node45->next=node46;
	node46->next=node47;
	node47->next=node48;
	node48->next=node49;
	node49->next=node50;
	node50->next=node51;
	node51->next=node52;
	node52->next=node53;
	node53->next=node54;
	node54->next=node55;
	node55->next=node56;
	node56->next=node57;
	node57->next=node58;
	node58->next=node59;
	node59->next=node60;
	node60->next=node61;
	node61->next=node62;
	node62->next=node63;
	node63->next=node64;
	node64->next=node65;
	node65->next=node66;
	node66->next=node67;
	node67->next=node68;
	node68->next=node69;
	node69->next=node70;
	node70->next=node71;
	node71->next=node72;
	node72->next=node73;
	node73->next=node74;
	node74->next=node75;
	node75->next=node76;
	node76->next=node77;
	node77->next=node78;
	node78->next=node79;
	node79->next=node80;
	node80->next=node81;
	node81->next=node82;
	node82->next=node83;
	node83->next=node84;
	node84->next=node85;
	node85->next=node86;
	node86->next=node87;
	node87->next=node88;
	node88->next=node89;
	node89->next=node90;
	node90->next=node91;
	node91->next=node92;
	node92->next=node93;
	node93->next=node94;
	node94->next=node95;
	node95->next=node96;
	node96->next=node97;
	node97->next=node98;
	node98->next=node99;
	node99->next=node100;
	node100->next=node101;
	node101->next=node102;
	node102->next=node103;
	node103->next=node104;
	node104->next=node105;
	node105->next=node106;
	node106->next=node107;
	node107->next=node108;
	node108->next=node109;
	node109->next=node110;
	node110->next=node111;
	node111->next=node112;
	node112->next=node113;
	node113->next=node114;
	node114->next=node115;
	node115->next=node116;
	node116->next=node117;
	node117->next=node118;
	node118->next=node119;
	node119->next=node120;
	node120->next=node121;
	node121->next=node122;
	node122->next=node123;
	node123->next=node124;
	node124->next=node125;
	node125->next=node126;
	node126->next=node127;
	node127->next=node129;
	node128->next=node130;
	node129->next=node128;
	node130->next=NULL;
strcpy(node1->word,"apple");
strcpy(node1->mean,"Fruit with red, yellow or green skin and sweet to tart crisp whitish flesh");

strcpy(node2->word,"aardwolf");
strcpy(node2->mean,"Stripedï¿½hyena of southeast Africa that feeds chiefly on insects");

strcpy(node3->word,"aargh");
strcpy(node3->mean,"Exclamation of frustration, rage, shock, etc.");

strcpy(node4->word,"abacination");
strcpy(node4->mean,"Blind by holding a red-hot metal plate before someone's eyes ");

strcpy(node5->word,"abandoned");
strcpy(node5->mean,"Empty of people and unused, not maintained by the owner or inhabitants ");

strcpy(node6->word,"available");
strcpy(node6->mean,"Obtainable or accessible and ready for use or service ");

strcpy(node7->word,"adaptable");
strcpy(node7->mean,"Capable of adapting (of becoming or being made suitable) to a particular situation or use ");

strcpy(node8->word,"anaconda");
strcpy(node8->mean,"Large arboreal boa of tropical Southï America");

strcpy(node9->word,"baby");
strcpy(node9->mean,"A very young child (birth to 1 year) who has not yet begun to walk or talk ");

strcpy(node10->word,"bad");
strcpy(node10->mean,"Having undesirable or negative qualities ");

strcpy(node11->word,"cat");
strcpy(node11->mean,"Feline mammal usually having thick soft fur; includes domesticï¿½cats, lions and tigers ");

strcpy(node12->word,"car");
strcpy(node12->mean,"A motorï¿½vehicle with four wheels; usually propelled by an internalï¿½combustion engine ");

strcpy(node13->word,"cadent");
strcpy(node13->mean,"Marked by a rhythmical cadence ");

strcpy(node14->word,"cahier");
strcpy(node14->mean,"A memorial of a body; a report of legislative proceedings, etc. ");

strcpy(node15->word,"cathode");
strcpy(node15->mean,"A negatively charged electrode that is the source of electrons entering an electricalï¿½device ");

strcpy(node16->word,"anode");
strcpy(node16->mean,"A positivelyï¿½charged electrode by which electrons leave an electricalï¿½devic ");

strcpy(node17->word,"dad");
strcpy(node17->mean,"An informal term for a father; probably derived from babyï¿½talk ");

strcpy(node18->word,"darer");
strcpy(node18->mean,"One who dares or defies ");

strcpy(node19->word,"dear");
strcpy(node19->mean,"With or in a close or intimate relationship ");

strcpy(node20->word,"Father");
strcpy(node20->mean,"God when considered as the firstï¿½person in the Trinity ");

strcpy(node21->word,"fast");
strcpy(node21->mean,"Acting or moving or capable of acting or moving quickly ");

strcpy(node22->word,"far");
strcpy(node22->mean,"At, to or from a great distance in space ");

strcpy(node23->word,"fill");
strcpy(node23->mean," Takeï¿½up all the available space");

strcpy(node24->word,"film");
strcpy(node24->mean,"A form of entertainment that enacts a story by sound and a sequence of images giving the illusion of continuous movement ");

strcpy(node25->word,"fan");
strcpy(node25->mean,"A device for creating a currentï¿½ofï¿½air by movement of a surface or surfaces ");

strcpy(node26->word,"gas");
strcpy(node26->mean,"The stateï¿½ofï¿½matter distinguished from the solid and liquidï¿½states by: relatively lowï¿½density and viscosity; relatively great expansion and contraction with changes in pressure and temperature; the ability to diffuse readily; and the spontaneous tendency to become distributed uniformly throughout any container ");

strcpy(node27->word,"gesture");
strcpy(node27->mean,"Motion of hands or body to emphasize or help to express a thought or feeling ");

strcpy(node28->word,"gel");
strcpy(node28->mean,"A colloid in a more solid form than a sol ");

strcpy(node29->word,"greet");
strcpy(node29->mean,"Express greetings upon meeting someone ");

strcpy(node30->word,"gearbox");
strcpy(node30->mean,"The shell (metal casing) in which a train of gears is sealed ");

strcpy(node31->word,"grab");
strcpy(node31->mean,"Takeï¿½holdï¿½of so asï¿½to seize, restrain or stop the motion of ");

strcpy(node32->word,"grocery");
strcpy(node32->mean,"A marketplace where groceries are sold ");

strcpy(node33->word,"happily");
strcpy(node33->mean,"In a joyous manner ");

strcpy(node34->word,"headache");
strcpy(node34->mean,"Something or someone that causes anxiety; a source of unhappiness ");

strcpy(node35->word,"home");
strcpy(node35->mean,"Where you live at a particular time ");

strcpy(node36->word,"honest");
strcpy(node36->mean,"Not disposed to cheat or defraud; not deceptive or fraudulent ");

strcpy(node37->word,"howdy");
strcpy(node37->mean,"An expression of greeting ");

strcpy(node38->word,"iceberg");
strcpy(node38->mean," A large mass of ice floating atï¿½sea; usually brokenï¿½off of a polarï¿½glacier");

strcpy(node39->word,"image");
strcpy(node39->mean,"An iconic mentalï¿½representation ");

strcpy(node40->word,"imaginary");
strcpy(node40->mean," Not based on fact; unreal");

strcpy(node41->word,"inaccessibility");
strcpy(node41->mean,"The quality of not being available when needed ");

strcpy(node42->word,"iodination");
strcpy(node42->mean,"The substitution or addition of iodine atoms in organicï¿½compounds ");

strcpy(node43->word,"itaconic");
strcpy(node43->mean,"A crystalline carboxylicï¿½acid; occurs in some fermentations of sugars ");

strcpy(node44->word,"jabber");
strcpy(node44->mean,"Talk in a noisy, excited, or declamatory manner ");

strcpy(node45->word,"jealous");
strcpy(node45->mean," Strongly wanting someone else's position, advantages or possessions");

strcpy(node46->word,"Job");
strcpy(node46->mean,"Any long-suffering person who withstands affliction without despairing ");

strcpy(node47->word,"jube");
strcpy(node47->mean,"Jujube confectionery ");

strcpy(node48->word,"jubilant");
strcpy(node48->mean,"Joyful and proud especially becauseï¿½of triumph or success ");\

strcpy(node49->word,"king");
strcpy(node49->mean," Joyful and proud especially becauseï¿½of triumph or success");

strcpy(node50->word,"knack");
strcpy(node50->mean,"A special way of doing something ");

strcpy(node51->word,"laptop");
strcpy(node51->mean,"A special way of doing something ");

strcpy(node52->word,"label");
strcpy(node52->mean,"Assign a label to; designate with a label ");

strcpy(node53->word,"ladder");
strcpy(node53->mean,"Ascending stages by which somebody or something can progress ");

strcpy(node54->word,"laevorotatary");
strcpy(node54->mean," Rotating to the left");

strcpy(node55->word,"lucid");
strcpy(node55->mean,"Having a clear mind ");

strcpy(node56->word,"map");
strcpy(node56->mean,"A diagrammatic representation of the earth's surface (or part of it) ");

strcpy(node57->word,"maffia");
strcpy(node57->mean,"A secret terroristï¿½group in Sicily; originally opposed tyranny but evolved into a criminal organization in the middle of the 19th century ");

strcpy(node58->word,"meadow");
strcpy(node58->mean,"A field where grass or alfalfa are grown to be made into hay ");

strcpy(node59->word,"miasmatic");
strcpy(node59->mean,"Givingï¿½off a strong unpleasant smell ");

strcpy(node60->word,"masque");
strcpy(node60->mean,"A party of guests wearing costumes and masks ");

strcpy(node61->word,"nap");
strcpy(node61->mean,"A periodï¿½ofï¿½time spent sleeping ");

strcpy(node62->word,"near");
strcpy(node62->mean,"Not far distant inï¿½time, space, degree or circumstances ");

strcpy(node63->word,"nibble");
strcpy(node63->mean,"Biteï¿½off very small pieces ");

strcpy(node64->word,"node");
strcpy(node64->mean,"A connecting point at which several lines comeï¿½together ");

strcpy(node65->word,"nest");
strcpy(node65->mean,"A structure in which animals lay eggs or giveï¿½birth to their young ");

strcpy(node66->word,"oak");
strcpy(node66->mean,"A deciduous tree of the genusï¿½Quercus; has acorns and lobedï¿½leaves ");

strcpy(node67->word,"oil");
strcpy(node67->mean,"A slippery or viscous liquid or liquefiable substance not miscible with water ");

strcpy(node68->word,"opacity");
strcpy(node68->mean,"The phenomenon of not permitting the passage of electromagneticï¿½radiation ");

strcpy(node69->word,"ought");
strcpy(node69->mean,"Expresses an emotional, practical, or other reason for doing something ");

strcpy(node70->word,"pablum");
strcpy(node70->mean,"Worthless or oversimplified ideas ");

strcpy(node71->word,"peace");
strcpy(node71->mean,"The state prevailing during the absence of war ");

strcpy(node72->word,"pianism");
strcpy(node72->mean,"Performance by or technique of a pianist ");

strcpy(node73->word,"poach");
strcpy(node73->mean,"Hunt illegally ");

strcpy(node74->word,"queen");
strcpy(node74->mean,"The wife or widow of a king ");

strcpy(node75->word,"query");
strcpy(node75->mean,"Pose a question ");

strcpy(node76->word,"quantity");
strcpy(node76->mean,"How much there is or how many there are of something that you can quantify ");

strcpy(node77->word,"quality");
strcpy(node77->mean,"A degree or grade of excellence or worth ");

strcpy(node78->word,"ready");
strcpy(node78->mean,"Completely prepared or inï¿½condition for immediate action or use or progress ");

strcpy(node79->word,"rough");
strcpy(node79->mean,"Having or caused by an irregular surface ");

strcpy(node80->word,"right");
strcpy(node80->mean,"An abstract idea of that which isï¿½due to a person or governmental body by law or tradition or nature ");

strcpy(node81->word,"ring");
strcpy(node81->mean,"Sound loudly and sonorously ");

strcpy(node82->word,"shock");
strcpy(node82->mean,"he feeling of distress and disbelief that you have when something bad happens accidentally ");

strcpy(node83->word,"shame");
strcpy(node83->mean,"A painful emotion resulting from an awareness of inadequacy or guilt ");

strcpy(node84->word,"same");
strcpy(node84->mean,"Closely similar or comparable inï¿½kind or quality or quantity or degree ");

strcpy(node85->word,"soak");
strcpy(node85->mean,"Submerge in a liquid ");

strcpy(node86->word,"soar");
strcpy(node86->mean,"Rise rapidly ");

strcpy(node87->word,"tamper");
strcpy(node87->mean,"Playï¿½around with or alter or falsify, usually secretively or dishonestly ");

strcpy(node88->word,"tab");
strcpy(node88->mean,"The key on a typewriter or a wordï¿½processor that causes a tabulation ");

strcpy(node89->word,"tablet");
strcpy(node89->mean,"A slab of stone or wood suitable for bearing an inscription ");

strcpy(node90->word,"tabular");
strcpy(node90->mean,"Of or pertaining to or arranged in table form ");

strcpy(node91->word,"transfer");
strcpy(node91->mean,"Move from one place to another ");

strcpy(node92->word,"ugly");
strcpy(node92->mean,"Displeasing to the senses ");

strcpy(node93->word,"urgent");
strcpy(node93->mean,"Compelling immediate action ");

strcpy(node94->word,"very");
strcpy(node94->mean,"Used as an intensifier ");

strcpy(node95->word,"vacant");
strcpy(node95->mean,"Void of thought or knowledge ");

strcpy(node96->word,"vacancy");
strcpy(node96->mean,"An unoccupied position or job ");

strcpy(node97->word,"work");
strcpy(node97->mean,"Activity directed toward making or doing something ");

strcpy(node98->word,"yin");
strcpy(node98->mean,"The dark negative feminine principle in Chinese dualistic cosmology ");

strcpy(node99->word,"zebra");
strcpy(node99->mean,"Any of several fleet black-and-white striped African equine ");

strcpy(node100->word,"zoo");
strcpy(node100->mean,"The facility where wild animals are housed for exhibition ");

	strcpy(node101->word,"Name");
	strcpy(node101->mean,"A descriptive or qualifying appellation given to a person or thing, on account of a character or acts.");
	
	strcpy(node102->word,"Nap");
	strcpy(node102->mean,"Woolly or villous surface of felt, cloth, plants, etc.; an external covering of down, of short fine hairs or fibers forming part of the substance of anything, and lying smoothly in one direction; the pile; -- as, the nap of cotton flannel or of broadcloth.");

	strcpy(node103->word,"Napkin");
	strcpy(node103->mean,"A little towel, or small cloth, esp. one for wiping the fingers and mouth at table.");

	strcpy(node104->word,"Narrow");
	strcpy(node104->mean,"Of little breadth; not wide or broad; having little distance from side to side; as, a narrow board; a narrow street; a narrow hem.");	
	
	strcpy(node105->word,"Natural");
	strcpy(node105->mean,"Having to do with existing system to things; dealing with, or derived from, the creation, or the world of matter and mind, as known by man; within the scope of human reason or experience; not supernatural; as, a natural law; natural science; history, theology.");
	
	strcpy(node106->word,"Native");
	strcpy(node106->mean,"Original; constituting the original substance of anything; as, native dust.");

	strcpy(node107->word,"Negative");
	strcpy(node107->mean,"Not positive; without affirmative statement or demonstration; indirect; consisting in the absence of something; privative; as, a negative argument; a negative morality; negative criticism.");
	
	strcpy(node108->word,"Network");
	strcpy(node108->mean,"Any system of lines or channels interlacing or crossing like the fabric of a net; as, a network of veins; a network of railroads.");
	
	strcpy(node109->word,"News");
	strcpy(node109->mean,"A report of recent occurences; information of something that has lately taken place, or of something before unknown; fresh tindings; recent intelligence.");
	
	strcpy(node110->word,"Nicotine");
	strcpy(node110->mean,"An alkaloid which is the active principle of tobacco. It is a colorless, transparent, oily liquid, having an acrid odor, and an acrid burning taste. It is intensely poisonous.");
	
	strcpy(node111->word,"oak");
	strcpy(node111->mean,"Any tree or shrub of the genus Quercus. The oaks have alternate leaves, often variously lobed, and staminate flowers in catkins. The fruit is a smooth nut, called an acorn, which is more or less inclosed in a scaly involucre called the cup or cupule. There are now recognized about three hundred species, of which nearly fifty occur in the United States, the rest in Europe, Asia, and the other parts of North America, a very few barely reaching the northern parts of South America and Africa. Many of the oaks form forest trees of grand proportions and live many centuries. The wood is usually hard and tough, and provided with conspicuous medullary rays, forming the silver grain.");
	
	strcpy(node112->word,"object");
	strcpy(node112->mean,"To make opposition in words or argument;usually followed by to.");
	
	strcpy(node113->word,"observe ");
	strcpy(node113->mean,"To take notice of by appropriate conduct; to conform one's action or practice to; to keep; to heed; to obey; to comply with; as, to observe rules or commands; to observe civility.");
	
	strcpy(node114->word,"occasional");
	strcpy(node114->mean,"Of or pertaining to an occasion or to occasions; occuring at times, but not constant, regular, or systematic; made or happening as opportunity requires or admits; casual; incidental; as, occasional remarks, or efforts.");
	
	strcpy(node115->word,"ocean");
	strcpy(node115->mean,"The whole body of salt water which covers more than three fifths of the surface of the globe; -- called also the sea, or great sea.");
	
	strcpy(node116->word,"offensive");
	strcpy(node116->mean,"the action of attacking an enemy.");
	
	strcpy(node117->word,"office");
	strcpy(node117->mean,"The place where a particular kind of business or service for others is transacted; a house or apartment in which public officers and others transact business; as, the register's office; a lawyer's office.");

	strcpy(node118->word,"oil");
	strcpy(node118->mean,"Any one of a great variety of unctuous combustible substances, not miscible with water; as, olive oil, whale oil, rock oil, etc. They are of animal, vegetable, or mineral origin and of varied composition, and they are variously used for food, for solvents, for anointing, lubrication, illumination, etc. By extension, any substance of an oily consistency; as, oil of vitriol.");
	
	strcpy(node119->word,"omnivorous");
	strcpy(node119->mean,"All-devouring; eating everything indiscriminately; as, omnivorous vanity; esp. (Zool.), eating both animal and vegetable food.");
	
	strcpy(node120->word,"oscar");
	strcpy(node120->mean,"an annual award by the Academy of Motion Picture Arts and Sciences for achievements in motion picture production and performance");
	
	strcpy(node121->word,"pace");
	strcpy(node121->mean,"Manner of stepping or moving; gait; walk; as, the walk, trot, canter, gallop, and amble are paces of the horse; a swaggering pace; a quick pace.");
	
	strcpy(node122->word,"pacific");
	strcpy(node122->mean,"that part of the Pacific Ocean north of the equator");

	strcpy(node123->word,"package");
	strcpy(node123->mean,"A bundle made up for transportation; a packet; a bale; a parcel; as, a package of goods.");
	
	strcpy(node124->word,"paint");
	strcpy(node124->mean,"To form in colors a figure or likeness of on a flat surface, as upon canvas; to represent by means of colors or hues; to exhibit in a tinted image; to portray with paints; as, to paint a portrait or a landscape.");
	
	strcpy(node125->word,"palindrome");
	strcpy(node125->mean,"A word, verse, or sentence, that is the same when read backward or forward; as, madam; Hannah; or Lewd did I live, & evil I did dwel.");
	
	strcpy(node126->word,"panel");
	strcpy(node126->mean,"A portion of a framed structure between adjacent posts or struts, as in a bridge truss.");

	strcpy(node127->word,"panther");
	strcpy(node127->mean,"A large dark-colored variety of the leopard, by some zoologists considered a distinct species. It is marked with large ringlike spots, the centers of which are darker than the color of the body.");

	strcpy(node128->word,"paragon");
	strcpy(node128->mean,"A model or pattern; a pattern of excellence or perfection; as, a paragon of beauty or eloquence.");

	strcpy(node129->word,"parchment");
	strcpy(node129->mean,"skin of a sheep or goat prepared for writing on");

	strcpy(node130->word,"password");
	strcpy(node130->mean,"Permission to pass; a document given by the competent officer of a state, permitting the person therein named to pass or travel from place to place, without molestation, by land or by water.");
	return start;
}
struct node *display (struct node *start)
{
 	struct node  *ptr;
 	ptr=start;
	while (ptr->next !=NULL)
 	{
  		printf ("%s :-\n%s\n\n",ptr->word,ptr->mean);
  		ptr=ptr->next;
 	}
   	printf ("%s\n%s\n",ptr->word,ptr->mean);
 	return start;
}
struct node *search (struct node *start)
{
	struct node *ptr;
	char key[10];
	printf("\nEnter your word -> ");
	gets(key);
	if(strcmp(key,"@history")==0)
		top=displayh(top);
	if(strcmp(key,"@exit")==0)
		exit(0);
	if(strcmp(ptr->word,key)==0 || (strcmp(ptr->word,key)!=0 && strcmp(key,"@history")!=0 && strcmp(key,"@exit")!=0))
	{
		ptr=start;
		top=push(top,key);
		while (strcmp(ptr->word,key) )
		{
			if(ptr->next==NULL)
			{
				break;
			}
			ptr=ptr->next; 
		}
		if (strcmp(ptr->word,key)==0)
		{
			printf("%s\n",	ptr->mean); 
		}
		if(strcmp(ptr->word,key)!=0)
		{
		 	printf ("\n!!!Given word is not found.\nSuggest meaning for word if you found\n");
		 	start=create(start,key); 
		}
	}
	return start; 
} 		
struct node *create (struct node *start,char key[])
{ 
 	struct node *newnode,*ptr;
 	char meaning[1000];
  	printf ("\nEnter meaning for word\n");
 	gets(meaning);
  	newnode=(struct node*)malloc(sizeof(struct node));
  	ptr=start;
  	while(ptr->next!=NULL)
  	{
        	ptr=ptr->next;
  	}
  	strcpy(newnode->mean,meaning);
  	ptr->next=newnode;
  	newnode->next=NULL;
  	return start;
}
struct hist *push(struct hist *top,char key[])
{
	struct hist *newnode;
	newnode=(struct hist *)malloc(sizeof (struct hist));
	strcpy(newnode->wordh,key);
	if (top==NULL)
     		newnode->nexth=NULL;
	else
 		newnode->nexth=top;
	top=newnode;
	return top;
}
struct hist *displayh(struct hist *top)
{
	struct hist *ptr;
	if (top==NULL)
     		printf ("!!! No word searched yet.!!!\n");
	else
	{
		printf ("*******HISTORY*******\n");
     		ptr=top;
          	while (ptr!=NULL)
          	{
           		printf("%s\n",ptr->wordh);
        	        ptr=ptr->nexth;
         	}
	}
   	return top;
}