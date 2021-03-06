//
//  UIColorHelper.h
//  Vadeara Cocoa Helpers
//
//  Created by Voda Ion on 23/04/12.
//  Copyright (c) 2008-2009 vadeara
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>

/*
 * Convenience method to return a UIColor with RGB values based on 255
 */

UIColor* UIColorMakeRGB(CGFloat red, CGFloat green, CGFloat blue); 
UIColor* UIColorWitAlpha(UIColor *color, int alpha);

@interface UIColor (MoreColors)
+ (id)aliceBlue;
+ (id)alizarin;
+ (id)amaranth;
+ (id)amber;
+ (id)amethyst;
+ (id)apricot;
+ (id)aqua;
+ (id)aquamarine;
+ (id)armyGreen;
+ (id)asparagus;
+ (id)atomicTangerine;
+ (id)auburn;
+ (id)azure;
+ (id)azureWeb;

+ (id)babyBlue;
+ (id)beige;
+ (id)bistre;
+ (id)black;
+ (id)blue;
+ (id)blueGreen;
+ (id)blueViolet;
+ (id)blazeOrange;
+ (id)bondiBlue;
+ (id)brass;
+ (id)brightGreen;
+ (id)brightPink;
+ (id)brightTurquoise;
+ (id)brilliantRose;
+ (id)britishRacingGreen;
+ (id)bronze;
+ (id)brown;
+ (id)buff;
+ (id)burgundy;
+ (id)burntOrange;
+ (id)burntSienna;
+ (id)burntUmber;

+ (id)camouflageGreen;
+ (id)caputMortuum;
+ (id)cardinal;
+ (id)carmine;
+ (id)carnationPink;
+ (id)carolinaBlue;
+ (id)carrotOrange;
+ (id)celadon;
+ (id)cerise;
+ (id)cerulean;
+ (id)ceruleanBlue;
+ (id)champagne;
+ (id)charcoal;
+ (id)chartreuse;
+ (id)chartreuseWeb;
+ (id)cherryBlossomPink;
+ (id)chestnut;
+ (id)chocolate;
+ (id)cinnabar;
+ (id)cinnamon;
+ (id)cobalt;
+ (id)columbiaBlue;
+ (id)copper;
+ (id)copperRose;
+ (id)coral;
+ (id)coralRed;
+ (id)corn;
+ (id)cornflowerBlue;
+ (id)cosmicLatte;
+ (id)cream;
+ (id)crimson;
+ (id)cyan;

+ (id)darkBlue;
+ (id)darkBrown;
+ (id)darkCerulean;
+ (id)darkChestnut;
+ (id)darkCoral;
+ (id)darkGoldenrod;
+ (id)darkGreen;
+ (id)darkKhaki;
+ (id)darkPastelGreen;
+ (id)darkPink;
+ (id)darkScarlet;
+ (id)darkSalmon;
+ (id)darkSlateGray;
+ (id)darkSpringGreen;
+ (id)darkTan;
+ (id)darkTurquoise;
+ (id)darkViolet;
+ (id)deepCerise;
+ (id)deepChestnut;
+ (id)deepFuchsia;
+ (id)deepLilac;
+ (id)deepMagenta;
+ (id)deepPeach;
+ (id)deepPink;
+ (id)denim;
+ (id)dodgerBlue;

+ (id)ecru;
+ (id)egyptianBlue;
+ (id)electricBlue;
+ (id)electricGreen;
+ (id)electricIndigo;
+ (id)electricLime;
+ (id)electricPurple;
+ (id)emerald;
+ (id)eggplant;

+ (id)faluRed;
+ (id)fernGreen;
+ (id)firebrick;
+ (id)flax;
+ (id)forestGreen;
+ (id)frenchRose;
+ (id)fuchsia;
+ (id)fuchsiaPink;

+ (id)gamboge;
+ (id)goldWeb;
+ (id)goldenBrown;
+ (id)goldenYellow;
+ (id)goldenrod;
+ (id)greyAsparagus;
+ (id)green;
+ (id)greenWeb;
+ (id)greenYellow;
+ (id)grey;

+ (id)hanPurple;
+ (id)harlequin;
+ (id)heliotrope;
+ (id)hollywoodCerise;
+ (id)hotMagenta;
+ (id)hotPink;

+ (id)indigo;
+ (id)indigoWeb;
+ (id)internationalKleinBlue;
+ (id)internationalOrange;
+ (id)islamicGreen;
+ (id)ivory;

+ (id)jade;

+ (id)kellyGreen;
+ (id)khaki;

+ (id)lightKhaki;
+ (id)lavender;
+ (id)lavenderWeb;
+ (id)lavenderBlue;
+ (id)lavenderBlush;
+ (id)lavenderGrey;
+ (id)lavenderMagenta;
+ (id)lavenderPink;
+ (id)lavenderPurple;
+ (id)lavenderRose;
+ (id)lawnGreen;
+ (id)lemon;
+ (id)lemonChiffon;
+ (id)lightBlue;
+ (id)lightPink;
+ (id)lilac;
+ (id)lime;
+ (id)limeWeb;
+ (id)limeGreen;
+ (id)linen;

+ (id)magenta;
+ (id)magentaDye;
+ (id)magicMint;
+ (id)magnolia;
+ (id)malachite;
+ (id)maroonWeb;
+ (id)maroon;
+ (id)mayaBlue;
+ (id)mauve;
+ (id)mauveTaupe;
+ (id)mediumBlue;
+ (id)mediumCarmine;
+ (id)mediumLavenderMagenta;
+ (id)mediumPurple;
+ (id)mediumSpringGreen;
+ (id)metallicGold;
+ (id)midnightBlue;
+ (id)mintGreen;
+ (id)mistyRose;
+ (id)mossGreen;
+ (id)mountbattenPink;
+ (id)mustard;
+ (id)myrtle;

+ (id)navajoWhite;
+ (id)navyBlue;

+ (id)ochre;
+ (id)officeGreen;
+ (id)oldGold;
+ (id)oldLace;
+ (id)oldLavender;
+ (id)oldRose;
+ (id)olive;
+ (id)oliveDrab;
+ (id)olivine;
+ (id)orange;
+ (id)orangeWeb;
+ (id)orangePeel;
+ (id)orangeRed;
+ (id)orchid;

+ (id)paleBlue;
+ (id)paleBrown;
+ (id)paleCarmine;
+ (id)paleChestnut;
+ (id)paleCornflowerBlue;
+ (id)paleMagenta;
+ (id)palePink;
+ (id)paleRedViolet;
+ (id)papayaWhip;
+ (id)pastelGreen;
+ (id)pastelPink;
+ (id)peach;
+ (id)peachOrange;
+ (id)peachYellow;
+ (id)pear;
+ (id)periwinkle;
+ (id)persianBlue;
+ (id)persianGreen;
+ (id)persianIndigo;
+ (id)persianOrange;
+ (id)persianRed;
+ (id)persianPink;
+ (id)persianRose;
+ (id)persimmon;
+ (id)pigmentRed;
+ (id)pigmentBlue;
+ (id)processCyan;
+ (id)pigmentGreen;

+ (id)pineGreen;
+ (id)pink;
+ (id)pinkOrange;
+ (id)platinum;
+ (id)plum;
+ (id)powderBlue;
+ (id)puce;
+ (id)prussianBlue;
+ (id)processMagenta;
+ (id)processYellow;
+ (id)psychedelicPurple;
+ (id)pumpkin;
+ (id)purpleWeb;
+ (id)purple;
+ (id)purpleTaupe;
+ (id)processYellow;

+ (id)rawUmber;
+ (id)razzmatazz;
+ (id)red;
+ (id)rybBlue;
+ (id)rybGreen;
+ (id)rybOrange;
+ (id)rybViolet;
+ (id)rybYellow;
+ (id)rybRed;
+ (id)redBiolet;
+ (id)richCarmine;
+ (id)robinEggBlue;
+ (id)rose;
+ (id)roseMadder;
+ (id)roseTaupe;
+ (id)royalBlue;
+ (id)royalPurple;
+ (id)ruby;
+ (id)russet;
+ (id)rust;

+ (id)safetyOrange;
+ (id)saffron;
+ (id)salmon;
+ (id)sandyBrown;
+ (id)sangria;
+ (id)sapphire;
+ (id)scarlet;
+ (id)schoolBusYellow;
+ (id)seaGreen;
+ (id)seashell;
+ (id)selectiveYellow;
+ (id)sepia;
+ (id)shamrockGreen;
+ (id)shockingPink;
+ (id)silver;
+ (id)skyBlue;
+ (id)slateGrey;
+ (id)smalt;
+ (id)springBud;
+ (id)springGreen;
+ (id)steelBlue;

+ (id)tan;
+ (id)tangerine;
+ (id)tangerineYellow;
+ (id)taupe;
+ (id)teaGreen;
+ (id)teaRoseOrange;
+ (id)teaRose;
+ (id)teal;
+ (id)tawny;
+ (id)terraCotta;
+ (id)thistle;
+ (id)tomato;
+ (id)turquoise;
+ (id)tufts;

+ (id)ultramarine;
+ (id)unitedNationsBlue;

+ (id)vegasGold;
+ (id)vermilion;
+ (id)violet;
+ (id)violetWeb;
+ (id)viridian;

+ (id)wheat;
+ (id)white;
+ (id)wisteria;

+ (id)yellow;
+ (id)yellowGreen;

+ (id)zinnwaldite;

@end
#endif