/* ZIndex */

type zIndex =
  | Z0
  | Z10
  | Z20
  | Z30
  | Z40
  | Z50
  | ZAuto;

let zIndexToJs =
  fun
  | Z0 => "z-0"
  | Z10 => "z-10"
  | Z20 => "z-20"
  | Z30 => "z-30"
  | Z40 => "z-40"
  | Z50 => "z-50"
  | ZAuto => "z-auto";

/* BorderCollapse */

type borderCollapse =
  | BorderCollapse
  | BorderSeparate;

let borderCollapseToJs =
  fun
  | BorderCollapse => "border-collapse"
  | BorderSeparate => "border-separate";

/* BackgroundPosition */

type backgroundPosition =
  | BgBottom
  | BgCenter
  | BgLeft
  | BgLeftBottom
  | BgLeftTop
  | BgRight
  | BgRightBottom
  | BgRightTop
  | BgTop;

let backgroundPositionToJs =
  fun
  | BgBottom => "bg-bottom"
  | BgCenter => "bg-center"
  | BgLeft => "bg-left"
  | BgLeftBottom => "bg-left-bottom"
  | BgLeftTop => "bg-left-top"
  | BgRight => "bg-right"
  | BgRightBottom => "bg-right-bottom"
  | BgRightTop => "bg-right-top"
  | BgTop => "bg-top";

/* Float */

type float =
  | FloatRight
  | FloatLeft
  | FloatNone
  | Clearfix;

let floatToJs =
  fun
  | FloatRight => "float-right"
  | FloatLeft => "float-left"
  | FloatNone => "float-none"
  | Clearfix => "clearfix";

/* Flex */

type flex =
  | FlexInitial
  | Flex1
  | FlexAuto
  | FlexNone;

let flexToJs =
  fun
  | FlexInitial => "flex-initial"
  | Flex1 => "flex-1"
  | FlexAuto => "flex-auto"
  | FlexNone => "flex-none";

/* VerticalAlign */

type verticalAlign =
  | AlignBaseline
  | AlignTop
  | AlignMiddle
  | AlignBottom
  | AlignTextTop
  | AlignTextBottom;

let verticalAlignToJs =
  fun
  | AlignBaseline => "align-baseline"
  | AlignTop => "align-top"
  | AlignMiddle => "align-middle"
  | AlignBottom => "align-bottom"
  | AlignTextTop => "align-text-top"
  | AlignTextBottom => "align-text-bottom";

/* BorderStyle */

type borderStyle =
  | BorderSolid
  | BorderDashed
  | BorderDotted
  | BorderDouble
  | BorderNone;

let borderStyleToJs =
  fun
  | BorderSolid => "border-solid"
  | BorderDashed => "border-dashed"
  | BorderDotted => "border-dotted"
  | BorderDouble => "border-double"
  | BorderNone => "border-none";

/* FillCurrent */

type fillCurrent = string;

let fillCurrentToJs = () => "fill-current";

/* Visibility */

type visibility =
  | Visible
  | Invisible;

let visibilityToJs =
  fun
  | Visible => "visible"
  | Invisible => "invisible";

/* OutlineNone */

type outlineNone = string;

let outlineNoneToJs = () => "outline-none";

/* Padding */

type padding =
  | P0
  | P1
  | P2
  | P3
  | P4
  | P5
  | P6
  | P8
  | P10
  | P12
  | P16
  | P20
  | P24
  | P32
  | P40
  | P48
  | P56
  | P64
  | PPx
  | Py0
  | Py1
  | Py2
  | Py3
  | Py4
  | Py5
  | Py6
  | Py8
  | Py10
  | Py12
  | Py16
  | Py20
  | Py24
  | Py32
  | Py40
  | Py48
  | Py56
  | Py64
  | PyPx
  | Px0
  | Px1
  | Px2
  | Px3
  | Px4
  | Px5
  | Px6
  | Px8
  | Px10
  | Px12
  | Px16
  | Px20
  | Px24
  | Px32
  | Px40
  | Px48
  | Px56
  | Px64
  | PxPx
  | Pt0
  | Pt1
  | Pt2
  | Pt3
  | Pt4
  | Pt5
  | Pt6
  | Pt8
  | Pt10
  | Pt12
  | Pt16
  | Pt20
  | Pt24
  | Pt32
  | Pt40
  | Pt48
  | Pt56
  | Pt64
  | PtPx
  | Pr0
  | Pr1
  | Pr2
  | Pr3
  | Pr4
  | Pr5
  | Pr6
  | Pr8
  | Pr10
  | Pr12
  | Pr16
  | Pr20
  | Pr24
  | Pr32
  | Pr40
  | Pr48
  | Pr56
  | Pr64
  | PrPx
  | Pb0
  | Pb1
  | Pb2
  | Pb3
  | Pb4
  | Pb5
  | Pb6
  | Pb8
  | Pb10
  | Pb12
  | Pb16
  | Pb20
  | Pb24
  | Pb32
  | Pb40
  | Pb48
  | Pb56
  | Pb64
  | PbPx
  | Pl0
  | Pl1
  | Pl2
  | Pl3
  | Pl4
  | Pl5
  | Pl6
  | Pl8
  | Pl10
  | Pl12
  | Pl16
  | Pl20
  | Pl24
  | Pl32
  | Pl40
  | Pl48
  | Pl56
  | Pl64
  | PlPx;

let paddingToJs =
  fun
  | P0 => "p-0"
  | P1 => "p-1"
  | P2 => "p-2"
  | P3 => "p-3"
  | P4 => "p-4"
  | P5 => "p-5"
  | P6 => "p-6"
  | P8 => "p-8"
  | P10 => "p-10"
  | P12 => "p-12"
  | P16 => "p-16"
  | P20 => "p-20"
  | P24 => "p-24"
  | P32 => "p-32"
  | P40 => "p-40"
  | P48 => "p-48"
  | P56 => "p-56"
  | P64 => "p-64"
  | PPx => "p-px"
  | Py0 => "py-0"
  | Py1 => "py-1"
  | Py2 => "py-2"
  | Py3 => "py-3"
  | Py4 => "py-4"
  | Py5 => "py-5"
  | Py6 => "py-6"
  | Py8 => "py-8"
  | Py10 => "py-10"
  | Py12 => "py-12"
  | Py16 => "py-16"
  | Py20 => "py-20"
  | Py24 => "py-24"
  | Py32 => "py-32"
  | Py40 => "py-40"
  | Py48 => "py-48"
  | Py56 => "py-56"
  | Py64 => "py-64"
  | PyPx => "py-px"
  | Px0 => "px-0"
  | Px1 => "px-1"
  | Px2 => "px-2"
  | Px3 => "px-3"
  | Px4 => "px-4"
  | Px5 => "px-5"
  | Px6 => "px-6"
  | Px8 => "px-8"
  | Px10 => "px-10"
  | Px12 => "px-12"
  | Px16 => "px-16"
  | Px20 => "px-20"
  | Px24 => "px-24"
  | Px32 => "px-32"
  | Px40 => "px-40"
  | Px48 => "px-48"
  | Px56 => "px-56"
  | Px64 => "px-64"
  | PxPx => "px-px"
  | Pt0 => "pt-0"
  | Pt1 => "pt-1"
  | Pt2 => "pt-2"
  | Pt3 => "pt-3"
  | Pt4 => "pt-4"
  | Pt5 => "pt-5"
  | Pt6 => "pt-6"
  | Pt8 => "pt-8"
  | Pt10 => "pt-10"
  | Pt12 => "pt-12"
  | Pt16 => "pt-16"
  | Pt20 => "pt-20"
  | Pt24 => "pt-24"
  | Pt32 => "pt-32"
  | Pt40 => "pt-40"
  | Pt48 => "pt-48"
  | Pt56 => "pt-56"
  | Pt64 => "pt-64"
  | PtPx => "pt-px"
  | Pr0 => "pr-0"
  | Pr1 => "pr-1"
  | Pr2 => "pr-2"
  | Pr3 => "pr-3"
  | Pr4 => "pr-4"
  | Pr5 => "pr-5"
  | Pr6 => "pr-6"
  | Pr8 => "pr-8"
  | Pr10 => "pr-10"
  | Pr12 => "pr-12"
  | Pr16 => "pr-16"
  | Pr20 => "pr-20"
  | Pr24 => "pr-24"
  | Pr32 => "pr-32"
  | Pr40 => "pr-40"
  | Pr48 => "pr-48"
  | Pr56 => "pr-56"
  | Pr64 => "pr-64"
  | PrPx => "pr-px"
  | Pb0 => "pb-0"
  | Pb1 => "pb-1"
  | Pb2 => "pb-2"
  | Pb3 => "pb-3"
  | Pb4 => "pb-4"
  | Pb5 => "pb-5"
  | Pb6 => "pb-6"
  | Pb8 => "pb-8"
  | Pb10 => "pb-10"
  | Pb12 => "pb-12"
  | Pb16 => "pb-16"
  | Pb20 => "pb-20"
  | Pb24 => "pb-24"
  | Pb32 => "pb-32"
  | Pb40 => "pb-40"
  | Pb48 => "pb-48"
  | Pb56 => "pb-56"
  | Pb64 => "pb-64"
  | PbPx => "pb-px"
  | Pl0 => "pl-0"
  | Pl1 => "pl-1"
  | Pl2 => "pl-2"
  | Pl3 => "pl-3"
  | Pl4 => "pl-4"
  | Pl5 => "pl-5"
  | Pl6 => "pl-6"
  | Pl8 => "pl-8"
  | Pl10 => "pl-10"
  | Pl12 => "pl-12"
  | Pl16 => "pl-16"
  | Pl20 => "pl-20"
  | Pl24 => "pl-24"
  | Pl32 => "pl-32"
  | Pl40 => "pl-40"
  | Pl48 => "pl-48"
  | Pl56 => "pl-56"
  | Pl64 => "pl-64"
  | PlPx => "pl-px";

/* StrokeCurrent */

type strokeCurrent = string;

let strokeCurrentToJs = () => "stroke-current";

/* TextColor */

type textColor =
  | TextTransparent
  | TextBlack
  | TextWhite
  | TextGray100
  | TextGray200
  | TextGray300
  | TextGray400
  | TextGray500
  | TextGray600
  | TextGray700
  | TextGray800
  | TextGray900
  | TextRed100
  | TextRed200
  | TextRed300
  | TextRed400
  | TextRed500
  | TextRed600
  | TextRed700
  | TextRed800
  | TextRed900
  | TextOrange100
  | TextOrange200
  | TextOrange300
  | TextOrange400
  | TextOrange500
  | TextOrange600
  | TextOrange700
  | TextOrange800
  | TextOrange900
  | TextYellow100
  | TextYellow200
  | TextYellow300
  | TextYellow400
  | TextYellow500
  | TextYellow600
  | TextYellow700
  | TextYellow800
  | TextYellow900
  | TextGreen100
  | TextGreen200
  | TextGreen300
  | TextGreen400
  | TextGreen500
  | TextGreen600
  | TextGreen700
  | TextGreen800
  | TextGreen900
  | TextTeal100
  | TextTeal200
  | TextTeal300
  | TextTeal400
  | TextTeal500
  | TextTeal600
  | TextTeal700
  | TextTeal800
  | TextTeal900
  | TextBlue100
  | TextBlue200
  | TextBlue300
  | TextBlue400
  | TextBlue500
  | TextBlue600
  | TextBlue700
  | TextBlue800
  | TextBlue900
  | TextIndigo100
  | TextIndigo200
  | TextIndigo300
  | TextIndigo400
  | TextIndigo500
  | TextIndigo600
  | TextIndigo700
  | TextIndigo800
  | TextIndigo900
  | TextPurple100
  | TextPurple200
  | TextPurple300
  | TextPurple400
  | TextPurple500
  | TextPurple600
  | TextPurple700
  | TextPurple800
  | TextPurple900
  | TextPink100
  | TextPink200
  | TextPink300
  | TextPink400
  | TextPink500
  | TextPink600
  | TextPink700
  | TextPink800
  | TextPink900;

let textColorToJs =
  fun
  | TextTransparent => "text-transparent"
  | TextBlack => "text-black"
  | TextWhite => "text-white"
  | TextGray100 => "text-gray-100"
  | TextGray200 => "text-gray-200"
  | TextGray300 => "text-gray-300"
  | TextGray400 => "text-gray-400"
  | TextGray500 => "text-gray-500"
  | TextGray600 => "text-gray-600"
  | TextGray700 => "text-gray-700"
  | TextGray800 => "text-gray-800"
  | TextGray900 => "text-gray-900"
  | TextRed100 => "text-red-100"
  | TextRed200 => "text-red-200"
  | TextRed300 => "text-red-300"
  | TextRed400 => "text-red-400"
  | TextRed500 => "text-red-500"
  | TextRed600 => "text-red-600"
  | TextRed700 => "text-red-700"
  | TextRed800 => "text-red-800"
  | TextRed900 => "text-red-900"
  | TextOrange100 => "text-orange-100"
  | TextOrange200 => "text-orange-200"
  | TextOrange300 => "text-orange-300"
  | TextOrange400 => "text-orange-400"
  | TextOrange500 => "text-orange-500"
  | TextOrange600 => "text-orange-600"
  | TextOrange700 => "text-orange-700"
  | TextOrange800 => "text-orange-800"
  | TextOrange900 => "text-orange-900"
  | TextYellow100 => "text-yellow-100"
  | TextYellow200 => "text-yellow-200"
  | TextYellow300 => "text-yellow-300"
  | TextYellow400 => "text-yellow-400"
  | TextYellow500 => "text-yellow-500"
  | TextYellow600 => "text-yellow-600"
  | TextYellow700 => "text-yellow-700"
  | TextYellow800 => "text-yellow-800"
  | TextYellow900 => "text-yellow-900"
  | TextGreen100 => "text-green-100"
  | TextGreen200 => "text-green-200"
  | TextGreen300 => "text-green-300"
  | TextGreen400 => "text-green-400"
  | TextGreen500 => "text-green-500"
  | TextGreen600 => "text-green-600"
  | TextGreen700 => "text-green-700"
  | TextGreen800 => "text-green-800"
  | TextGreen900 => "text-green-900"
  | TextTeal100 => "text-teal-100"
  | TextTeal200 => "text-teal-200"
  | TextTeal300 => "text-teal-300"
  | TextTeal400 => "text-teal-400"
  | TextTeal500 => "text-teal-500"
  | TextTeal600 => "text-teal-600"
  | TextTeal700 => "text-teal-700"
  | TextTeal800 => "text-teal-800"
  | TextTeal900 => "text-teal-900"
  | TextBlue100 => "text-blue-100"
  | TextBlue200 => "text-blue-200"
  | TextBlue300 => "text-blue-300"
  | TextBlue400 => "text-blue-400"
  | TextBlue500 => "text-blue-500"
  | TextBlue600 => "text-blue-600"
  | TextBlue700 => "text-blue-700"
  | TextBlue800 => "text-blue-800"
  | TextBlue900 => "text-blue-900"
  | TextIndigo100 => "text-indigo-100"
  | TextIndigo200 => "text-indigo-200"
  | TextIndigo300 => "text-indigo-300"
  | TextIndigo400 => "text-indigo-400"
  | TextIndigo500 => "text-indigo-500"
  | TextIndigo600 => "text-indigo-600"
  | TextIndigo700 => "text-indigo-700"
  | TextIndigo800 => "text-indigo-800"
  | TextIndigo900 => "text-indigo-900"
  | TextPurple100 => "text-purple-100"
  | TextPurple200 => "text-purple-200"
  | TextPurple300 => "text-purple-300"
  | TextPurple400 => "text-purple-400"
  | TextPurple500 => "text-purple-500"
  | TextPurple600 => "text-purple-600"
  | TextPurple700 => "text-purple-700"
  | TextPurple800 => "text-purple-800"
  | TextPurple900 => "text-purple-900"
  | TextPink100 => "text-pink-100"
  | TextPink200 => "text-pink-200"
  | TextPink300 => "text-pink-300"
  | TextPink400 => "text-pink-400"
  | TextPink500 => "text-pink-500"
  | TextPink600 => "text-pink-600"
  | TextPink700 => "text-pink-700"
  | TextPink800 => "text-pink-800"
  | TextPink900 => "text-pink-900";

/* AlignContent */

type alignContent =
  | ContentStart
  | ContentCenter
  | ContentEnd
  | ContentBetween
  | ContentAround;

let alignContentToJs =
  fun
  | ContentStart => "content-start"
  | ContentCenter => "content-center"
  | ContentEnd => "content-end"
  | ContentBetween => "content-between"
  | ContentAround => "content-around";

/* ListStyleType */

type listStyleType =
  | ListNone
  | ListDisc
  | ListDecimal;

let listStyleTypeToJs =
  fun
  | ListNone => "list-none"
  | ListDisc => "list-disc"
  | ListDecimal => "list-decimal";

/* FontStyle */

type fontStyle =
  | Italic
  | NotItalic;

let fontStyleToJs =
  fun
  | Italic => "italic"
  | NotItalic => "not-italic";

/* Cursor */

type cursor =
  | CursorAuto
  | CursorDefault
  | CursorPointer
  | CursorWait
  | CursorText
  | CursorMove
  | CursorNotAllowed;

let cursorToJs =
  fun
  | CursorAuto => "cursor-auto"
  | CursorDefault => "cursor-default"
  | CursorPointer => "cursor-pointer"
  | CursorWait => "cursor-wait"
  | CursorText => "cursor-text"
  | CursorMove => "cursor-move"
  | CursorNotAllowed => "cursor-not-allowed";

/* TableLayout */

type tableLayout =
  | TableAuto
  | TableFixed;

let tableLayoutToJs =
  fun
  | TableAuto => "table-auto"
  | TableFixed => "table-fixed";

/* FontWeight */

type fontWeight =
  | FontHairline
  | FontThin
  | FontLight
  | FontNormal
  | FontMedium
  | FontSemibold
  | FontBold
  | FontExtrabold
  | FontBlack;

let fontWeightToJs =
  fun
  | FontHairline => "font-hairline"
  | FontThin => "font-thin"
  | FontLight => "font-light"
  | FontNormal => "font-normal"
  | FontMedium => "font-medium"
  | FontSemibold => "font-semibold"
  | FontBold => "font-bold"
  | FontExtrabold => "font-extrabold"
  | FontBlack => "font-black";

/* BackgroundRepeat */

type backgroundRepeat =
  | BgRepeat
  | BgNoRepeat
  | BgRepeatX
  | BgRepeatY
  | BgRepeatRound
  | BgRepeatSpace;

let backgroundRepeatToJs =
  fun
  | BgRepeat => "bg-repeat"
  | BgNoRepeat => "bg-no-repeat"
  | BgRepeatX => "bg-repeat-x"
  | BgRepeatY => "bg-repeat-y"
  | BgRepeatRound => "bg-repeat-round"
  | BgRepeatSpace => "bg-repeat-space";

/* JustifyContent */

type justifyContent =
  | JustifyStart
  | JustifyCenter
  | JustifyEnd
  | JustifyBetween
  | JustifyAround;

let justifyContentToJs =
  fun
  | JustifyStart => "justify-start"
  | JustifyCenter => "justify-center"
  | JustifyEnd => "justify-end"
  | JustifyBetween => "justify-between"
  | JustifyAround => "justify-around";

/* Overflow */

type overflow =
  | OverflowAuto
  | OverflowHidden
  | OverflowVisible
  | OverflowScroll
  | OverflowXAuto
  | OverflowYAuto
  | OverflowXHidden
  | OverflowYHidden
  | OverflowXVisible
  | OverflowYVisible
  | OverflowXScroll
  | OverflowYScroll
  | ScrollingTouch
  | ScrollingAuto;

let overflowToJs =
  fun
  | OverflowAuto => "overflow-auto"
  | OverflowHidden => "overflow-hidden"
  | OverflowVisible => "overflow-visible"
  | OverflowScroll => "overflow-scroll"
  | OverflowXAuto => "overflow-x-auto"
  | OverflowYAuto => "overflow-y-auto"
  | OverflowXHidden => "overflow-x-hidden"
  | OverflowYHidden => "overflow-y-hidden"
  | OverflowXVisible => "overflow-x-visible"
  | OverflowYVisible => "overflow-y-visible"
  | OverflowXScroll => "overflow-x-scroll"
  | OverflowYScroll => "overflow-y-scroll"
  | ScrollingTouch => "scrolling-touch"
  | ScrollingAuto => "scrolling-auto";

/* MaxHeight */

type maxHeight =
  | MaxHFull
  | MaxHScreen;

let maxHeightToJs =
  fun
  | MaxHFull => "max-h-full"
  | MaxHScreen => "max-h-screen";

/* Container */

type container = string;

let containerToJs = () => "container";

/* BorderColor */

type borderColor =
  | BorderTransparent
  | BorderBlack
  | BorderWhite
  | BorderGray100
  | BorderGray200
  | BorderGray300
  | BorderGray400
  | BorderGray500;

let borderColorToJs =
  fun
  | BorderTransparent => "border-transparent"
  | BorderBlack => "border-black"
  | BorderWhite => "border-white"
  | BorderGray100 => "border-gray-100"
  | BorderGray200 => "border-gray-200"
  | BorderGray300 => "border-gray-300"
  | BorderGray400 => "border-gray-400"
  | BorderGray500 => "border-gray-500";

/* ObjectFit */

type objectFit =
  | ObjectContain
  | ObjectCover
  | ObjectFill
  | ObjectNone
  | ObjectScaleDown;

let objectFitToJs =
  fun
  | ObjectContain => "object-contain"
  | ObjectCover => "object-cover"
  | ObjectFill => "object-fill"
  | ObjectNone => "object-none"
  | ObjectScaleDown => "object-scale-down";

/* Position */

type position =
  | Static
  | Fixed
  | Absolute
  | Relative
  | Sticky;

let positionToJs =
  fun
  | Static => "static"
  | Fixed => "fixed"
  | Absolute => "absolute"
  | Relative => "relative"
  | Sticky => "sticky";

/* FlexWrap */

type flexWrap =
  | FlexNoWrap
  | FlexWrap
  | FlexWrapReverse;

let flexWrapToJs =
  fun
  | FlexNoWrap => "flex-no-wrap"
  | FlexWrap => "flex-wrap"
  | FlexWrapReverse => "flex-wrap-reverse";

/* FlexShrink */

type flexShrink =
  | FlexShrink
  | FlexShrink0;

let flexShrinkToJs =
  fun
  | FlexShrink => "flex-shrink"
  | FlexShrink0 => "flex-shrink-0";

/* Width */

type width =
  | W0
  | W1
  | W2
  | W3
  | W4
  | W5
  | W6
  | W8
  | W10
  | W12
  | W16
  | W20
  | W24
  | W32
  | W40
  | W48
  | W56
  | W64
  | WAuto
  | WPx
  | W1_2
  | W1_3
  | W2_3
  | W1_4
  | W2_4
  | W3_4
  | W1_5
  | W2_5
  | W3_5
  | W4_5
  | W1_6
  | W2_6
  | W3_6
  | W4_6
  | W5_6
  | W1_12
  | W2_12
  | W3_12
  | W4_12
  | W5_12
  | W6_12
  | W7_12
  | W8_12
  | W9_12
  | W10_12
  | W11_12
  | WFull
  | WScreen;

let widthToJs =
  fun
  | W0 => "w-0"
  | W1 => "w-1"
  | W2 => "w-2"
  | W3 => "w-3"
  | W4 => "w-4"
  | W5 => "w-5"
  | W6 => "w-6"
  | W8 => "w-8"
  | W10 => "w-10"
  | W12 => "w-12"
  | W16 => "w-16"
  | W20 => "w-20"
  | W24 => "w-24"
  | W32 => "w-32"
  | W40 => "w-40"
  | W48 => "w-48"
  | W56 => "w-56"
  | W64 => "w-64"
  | WAuto => "w-auto"
  | WPx => "w-px"
  | W1_2 => "w-1_2"
  | W1_3 => "w-1_3"
  | W2_3 => "w-2_3"
  | W1_4 => "w-1_4"
  | W2_4 => "w-2_4"
  | W3_4 => "w-3_4"
  | W1_5 => "w-1_5"
  | W2_5 => "w-2_5"
  | W3_5 => "w-3_5"
  | W4_5 => "w-4_5"
  | W1_6 => "w-1_6"
  | W2_6 => "w-2_6"
  | W3_6 => "w-3_6"
  | W4_6 => "w-4_6"
  | W5_6 => "w-5_6"
  | W1_12 => "w-1_12"
  | W2_12 => "w-2_12"
  | W3_12 => "w-3_12"
  | W4_12 => "w-4_12"
  | W5_12 => "w-5_12"
  | W6_12 => "w-6_12"
  | W7_12 => "w-7_12"
  | W8_12 => "w-8_12"
  | W9_12 => "w-9_12"
  | W10_12 => "w-10_12"
  | W11_12 => "w-11_12"
  | WFull => "w-full"
  | WScreen => "w-screen";

/* FontSmoothing */

type fontSmoothing =
  | Antialiased
  | SubpixelAntialiased;

let fontSmoothingToJs =
  fun
  | Antialiased => "antialiased"
  | SubpixelAntialiased => "subpixel-antialiased";

/* TextDecoration */

type textDecoration =
  | Underline
  | LineThrough
  | NoUnderline;

let textDecorationToJs =
  fun
  | Underline => "underline"
  | LineThrough => "line-through"
  | NoUnderline => "no-underline";

/* TextTransform */

type textTransform =
  | Uppercase
  | Lowercase
  | Capitalize
  | NormalCase;

let textTransformToJs =
  fun
  | Uppercase => "uppercase"
  | Lowercase => "lowercase"
  | Capitalize => "capitalize"
  | NormalCase => "normal-case";

/* ObjectPosition */

type objectPosition =
  | ObjectBottom
  | ObjectCenter
  | ObjectLeft
  | ObjectLeftBottom
  | ObjectLeftTop
  | ObjectRight
  | ObjectRightBottom
  | ObjectRightTop
  | ObjectTop;

let objectPositionToJs =
  fun
  | ObjectBottom => "object-bottom"
  | ObjectCenter => "object-center"
  | ObjectLeft => "object-left"
  | ObjectLeftBottom => "object-left-bottom"
  | ObjectLeftTop => "object-left-top"
  | ObjectRight => "object-right"
  | ObjectRightBottom => "object-right-bottom"
  | ObjectRightTop => "object-right-top"
  | ObjectTop => "object-top";

/* Order */

type order =
  | OrderFirst
  | OrderLast
  | OrderNone
  | Order1
  | Order2
  | Order3
  | Order4
  | Order5
  | Order6
  | Order7
  | Order8
  | Order9
  | Order10
  | Order11
  | Order12;

let orderToJs =
  fun
  | OrderFirst => "order-first"
  | OrderLast => "order-last"
  | OrderNone => "order-none"
  | Order1 => "order-1"
  | Order2 => "order-2"
  | Order3 => "order-3"
  | Order4 => "order-4"
  | Order5 => "order-5"
  | Order6 => "order-6"
  | Order7 => "order-7"
  | Order8 => "order-8"
  | Order9 => "order-9"
  | Order10 => "order-10"
  | Order11 => "order-11"
  | Order12 => "order-12";

/* Resize */

type resize =
  | ResizeNone
  | Resize
  | ResizeY
  | ResizeX;

let resizeToJs =
  fun
  | ResizeNone => "resize-none"
  | Resize => "resize"
  | ResizeY => "resize-y"
  | ResizeX => "resize-x";

/* FontFamily */

type fontFamily =
  | FontSans
  | FontSerif
  | FontMono;

let fontFamilyToJs =
  fun
  | FontSans => "font-sans"
  | FontSerif => "font-serif"
  | FontMono => "font-mono";

/* BackgroundColor */

type backgroundColor =
  | BgTransparent
  | BgBlack
  | BgWhite
  | BgGray100
  | BgGray200
  | BgGray300
  | BgGray400
  | BgGray500
  | BgGray600
  | BgGray700
  | BgGray800
  | BgGray900
  | BgRed100
  | BgRed200
  | BgRed300
  | BgRed400
  | BgRed500
  | BgRed600
  | BgRed700
  | BgRed800
  | BgRed900
  | BgOrange100
  | BgOrange200
  | BgOrange300
  | BgOrange400
  | BgOrange500
  | BgOrange600
  | BgOrange700
  | BgOrange800
  | BgOrange900
  | BgYellow100
  | BgYellow200
  | BgYellow300
  | BgYellow400
  | BgYellow500
  | BgYellow600
  | BgYellow700
  | BgYellow800
  | BgYellow900
  | BgGreen100
  | BgGreen200
  | BgGreen300
  | BgGreen400
  | BgGreen500
  | BgGreen600
  | BgGreen700
  | BgGreen800
  | BgGreen900
  | BgTeal100
  | BgTeal200
  | BgTeal300
  | BgTeal400
  | BgTeal500
  | BgTeal600
  | BgTeal700
  | BgTeal800
  | BgTeal900
  | BgBlue100
  | BgBlue200
  | BgBlue300
  | BgBlue400
  | BgBlue500
  | BgBlue600
  | BgBlue700
  | BgBlue800
  | BgBlue900
  | BgIndigo100
  | BgIndigo200
  | BgIndigo300
  | BgIndigo400
  | BgIndigo500
  | BgIndigo600
  | BgIndigo700
  | BgIndigo800
  | BgIndigo900
  | BgPurple100
  | BgPurple200
  | BgPurple300
  | BgPurple400
  | BgPurple500
  | BgPurple600
  | BgPurple700
  | BgPurple800
  | BgPurple900
  | BgPink100
  | BgPink200
  | BgPink300
  | BgPink400
  | BgPink500
  | BgPink600
  | BgPink700
  | BgPink800
  | BgPink900;

let backgroundColorToJs =
  fun
  | BgTransparent => "bg-transparent"
  | BgBlack => "bg-black"
  | BgWhite => "bg-white"
  | BgGray100 => "bg-gray-100"
  | BgGray200 => "bg-gray-200"
  | BgGray300 => "bg-gray-300"
  | BgGray400 => "bg-gray-400"
  | BgGray500 => "bg-gray-500"
  | BgGray600 => "bg-gray-600"
  | BgGray700 => "bg-gray-700"
  | BgGray800 => "bg-gray-800"
  | BgGray900 => "bg-gray-900"
  | BgRed100 => "bg-red-100"
  | BgRed200 => "bg-red-200"
  | BgRed300 => "bg-red-300"
  | BgRed400 => "bg-red-400"
  | BgRed500 => "bg-red-500"
  | BgRed600 => "bg-red-600"
  | BgRed700 => "bg-red-700"
  | BgRed800 => "bg-red-800"
  | BgRed900 => "bg-red-900"
  | BgOrange100 => "bg-orange-100"
  | BgOrange200 => "bg-orange-200"
  | BgOrange300 => "bg-orange-300"
  | BgOrange400 => "bg-orange-400"
  | BgOrange500 => "bg-orange-500"
  | BgOrange600 => "bg-orange-600"
  | BgOrange700 => "bg-orange-700"
  | BgOrange800 => "bg-orange-800"
  | BgOrange900 => "bg-orange-900"
  | BgYellow100 => "bg-yellow-100"
  | BgYellow200 => "bg-yellow-200"
  | BgYellow300 => "bg-yellow-300"
  | BgYellow400 => "bg-yellow-400"
  | BgYellow500 => "bg-yellow-500"
  | BgYellow600 => "bg-yellow-600"
  | BgYellow700 => "bg-yellow-700"
  | BgYellow800 => "bg-yellow-800"
  | BgYellow900 => "bg-yellow-900"
  | BgGreen100 => "bg-green-100"
  | BgGreen200 => "bg-green-200"
  | BgGreen300 => "bg-green-300"
  | BgGreen400 => "bg-green-400"
  | BgGreen500 => "bg-green-500"
  | BgGreen600 => "bg-green-600"
  | BgGreen700 => "bg-green-700"
  | BgGreen800 => "bg-green-800"
  | BgGreen900 => "bg-green-900"
  | BgTeal100 => "bg-teal-100"
  | BgTeal200 => "bg-teal-200"
  | BgTeal300 => "bg-teal-300"
  | BgTeal400 => "bg-teal-400"
  | BgTeal500 => "bg-teal-500"
  | BgTeal600 => "bg-teal-600"
  | BgTeal700 => "bg-teal-700"
  | BgTeal800 => "bg-teal-800"
  | BgTeal900 => "bg-teal-900"
  | BgBlue100 => "bg-blue-100"
  | BgBlue200 => "bg-blue-200"
  | BgBlue300 => "bg-blue-300"
  | BgBlue400 => "bg-blue-400"
  | BgBlue500 => "bg-blue-500"
  | BgBlue600 => "bg-blue-600"
  | BgBlue700 => "bg-blue-700"
  | BgBlue800 => "bg-blue-800"
  | BgBlue900 => "bg-blue-900"
  | BgIndigo100 => "bg-indigo-100"
  | BgIndigo200 => "bg-indigo-200"
  | BgIndigo300 => "bg-indigo-300"
  | BgIndigo400 => "bg-indigo-400"
  | BgIndigo500 => "bg-indigo-500"
  | BgIndigo600 => "bg-indigo-600"
  | BgIndigo700 => "bg-indigo-700"
  | BgIndigo800 => "bg-indigo-800"
  | BgIndigo900 => "bg-indigo-900"
  | BgPurple100 => "bg-purple-100"
  | BgPurple200 => "bg-purple-200"
  | BgPurple300 => "bg-purple-300"
  | BgPurple400 => "bg-purple-400"
  | BgPurple500 => "bg-purple-500"
  | BgPurple600 => "bg-purple-600"
  | BgPurple700 => "bg-purple-700"
  | BgPurple800 => "bg-purple-800"
  | BgPurple900 => "bg-purple-900"
  | BgPink100 => "bg-pink-100"
  | BgPink200 => "bg-pink-200"
  | BgPink300 => "bg-pink-300"
  | BgPink400 => "bg-pink-400"
  | BgPink500 => "bg-pink-500"
  | BgPink600 => "bg-pink-600"
  | BgPink700 => "bg-pink-700"
  | BgPink800 => "bg-pink-800"
  | BgPink900 => "bg-pink-900";

/* Whitespace */

type whitespace =
  | WhitespaceNormal
  | WhitespaceNoWrap
  | WhitespacePre
  | WhitespacePreLine
  | WhitespacePreWrap;

let whitespaceToJs =
  fun
  | WhitespaceNormal => "whitespace-normal"
  | WhitespaceNoWrap => "whitespace-no-wrap"
  | WhitespacePre => "whitespace-pre"
  | WhitespacePreLine => "whitespace-pre-line"
  | WhitespacePreWrap => "whitespace-pre-wrap";

/* Margin */

type margin =
  | M1
  | MinusM1
  | MinusM2
  | MinusM3
  | MinusM4
  | MinusM5
  | MinusM6
  | MinusM8
  | MinusM10
  | MinusM12
  | MinusM16
  | MinusM20
  | MinusM24
  | MinusM32
  | MinusM40
  | MinusM48
  | MinusM56
  | MinusM64
  | MinusMPx
  | My0
  | My1
  | My2
  | My3
  | My4
  | My5
  | My6
  | My8
  | My10
  | My12
  | My16
  | My20
  | My24
  | My32
  | My40
  | My48
  | My56
  | My64
  | MyAuto
  | MyPx
  | MinusMy1
  | MinusMy2
  | MinusMy3
  | MinusMy4
  | MinusMy5
  | MinusMy6
  | MinusMy8
  | MinusMy10
  | MinusMy12
  | MinusMy16
  | MinusMy20
  | MinusMy24
  | MinusMy32
  | MinusMy40
  | MinusMy48
  | MinusMy56
  | MinusMy64
  | MinusMyPx
  | Mx0
  | Mx1
  | Mx2
  | Mx3
  | Mx4
  | Mx5
  | Mx6
  | Mx8
  | Mx10
  | Mx12
  | Mx16
  | Mx20
  | Mx24
  | Mx32
  | Mx40
  | Mx48
  | Mx56
  | Mx64
  | MxAuto
  | MxPx
  | MinusMx1
  | MinusMx2
  | MinusMx3
  | MinusMx4
  | MinusMx5
  | MinusMx6
  | MinusMx8
  | MinusMx10
  | MinusMx12
  | MinusMx16
  | MinusMx20
  | MinusMx24
  | MinusMx32
  | MinusMx40
  | MinusMx48
  | MinusMx56
  | MinusMx64
  | MinusMxPx
  | Mt0
  | Mt1
  | Mt2
  | Mt3
  | Mt4
  | Mt5
  | Mt6
  | Mt8
  | Mt10
  | Mt12
  | Mt16
  | Mt20
  | Mt24
  | Mt32
  | Mt40
  | Mt48
  | Mt56
  | Mt64
  | MtAuto
  | MtPx
  | MinusMt1
  | MinusMt2
  | MinusMt3
  | MinusMt4
  | MinusMt5
  | MinusMt6
  | MinusMt8
  | MinusMt10
  | MinusMt12
  | MinusMt16
  | MinusMt20
  | MinusMt24
  | MinusMt32
  | MinusMt40
  | MinusMt48
  | MinusMt56
  | MinusMt64
  | MinusMtPx
  | Mr0
  | Mr1
  | Mr2
  | Mr3
  | Mr4
  | Mr5
  | Mr6
  | Mr8
  | Mr10
  | Mr12
  | Mr16
  | Mr20
  | Mr24
  | Mr32
  | Mr40
  | Mr48
  | Mr56
  | Mr64
  | MrAuto
  | MrPx
  | MinusMr1
  | MinusMr2
  | MinusMr3
  | MinusMr4
  | MinusMr5
  | MinusMr6
  | MinusMr8
  | MinusMr10
  | MinusMr12
  | MinusMr16
  | MinusMr20
  | MinusMr24
  | MinusMr32
  | MinusMr40
  | MinusMr48
  | MinusMr56
  | MinusMr64
  | MinusMrPx
  | Mb0
  | Mb1
  | Mb2
  | Mb3
  | Mb4
  | Mb5
  | Mb6
  | Mb8
  | Mb10
  | Mb12
  | Mb16
  | Mb20
  | Mb24
  | Mb32
  | Mb40
  | Mb48
  | Mb56
  | Mb64
  | MbAuto
  | MbPx
  | MinusMb1
  | MinusMb2
  | MinusMb3
  | MinusMb4
  | MinusMb5
  | MinusMb6
  | MinusMb8
  | MinusMb10
  | MinusMb12
  | MinusMb16
  | MinusMb20
  | MinusMb24
  | MinusMb32
  | MinusMb40
  | MinusMb48
  | MinusMb56
  | MinusMb64
  | MinusMbPx
  | Ml0
  | Ml1
  | Ml2
  | Ml3
  | Ml4
  | Ml5
  | Ml6
  | Ml8
  | Ml10
  | Ml12
  | Ml16
  | Ml20
  | Ml24
  | Ml32
  | Ml40
  | Ml48
  | Ml56
  | Ml64
  | MlAuto
  | MlPx
  | MinusMl1
  | MinusMl2
  | MinusMl3
  | MinusMl4
  | MinusMl5
  | MinusMl6
  | MinusMl8
  | MinusMl10
  | MinusMl12
  | MinusMl16
  | MinusMl20
  | MinusMl24
  | MinusMl32
  | MinusMl40
  | MinusMl48
  | MinusMl56
  | MinusMl64
  | MinusMlPx;

let marginToJs =
  fun
  | M1 => "m-1"
  | MinusM1 => "-m-1"
  | MinusM2 => "-m-2"
  | MinusM3 => "-m-3"
  | MinusM4 => "-m-4"
  | MinusM5 => "-m-5"
  | MinusM6 => "-m-6"
  | MinusM8 => "-m-8"
  | MinusM10 => "-m-10"
  | MinusM12 => "-m-12"
  | MinusM16 => "-m-16"
  | MinusM20 => "-m-20"
  | MinusM24 => "-m-24"
  | MinusM32 => "-m-32"
  | MinusM40 => "-m-40"
  | MinusM48 => "-m-48"
  | MinusM56 => "-m-56"
  | MinusM64 => "-m-64"
  | MinusMPx => "-m-px"
  | My0 => "my-0"
  | My1 => "my-1"
  | My2 => "my-2"
  | My3 => "my-3"
  | My4 => "my-4"
  | My5 => "my-5"
  | My6 => "my-6"
  | My8 => "my-8"
  | My10 => "my-10"
  | My12 => "my-12"
  | My16 => "my-16"
  | My20 => "my-20"
  | My24 => "my-24"
  | My32 => "my-32"
  | My40 => "my-40"
  | My48 => "my-48"
  | My56 => "my-56"
  | My64 => "my-64"
  | MyAuto => "my-auto"
  | MyPx => "my-px"
  | MinusMy1 => "-my-1"
  | MinusMy2 => "-my-2"
  | MinusMy3 => "-my-3"
  | MinusMy4 => "-my-4"
  | MinusMy5 => "-my-5"
  | MinusMy6 => "-my-6"
  | MinusMy8 => "-my-8"
  | MinusMy10 => "-my-10"
  | MinusMy12 => "-my-12"
  | MinusMy16 => "-my-16"
  | MinusMy20 => "-my-20"
  | MinusMy24 => "-my-24"
  | MinusMy32 => "-my-32"
  | MinusMy40 => "-my-40"
  | MinusMy48 => "-my-48"
  | MinusMy56 => "-my-56"
  | MinusMy64 => "-my-64"
  | MinusMyPx => "-my-px"
  | Mx0 => "mx-0"
  | Mx1 => "mx-1"
  | Mx2 => "mx-2"
  | Mx3 => "mx-3"
  | Mx4 => "mx-4"
  | Mx5 => "mx-5"
  | Mx6 => "mx-6"
  | Mx8 => "mx-8"
  | Mx10 => "mx-10"
  | Mx12 => "mx-12"
  | Mx16 => "mx-16"
  | Mx20 => "mx-20"
  | Mx24 => "mx-24"
  | Mx32 => "mx-32"
  | Mx40 => "mx-40"
  | Mx48 => "mx-48"
  | Mx56 => "mx-56"
  | Mx64 => "mx-64"
  | MxAuto => "mx-auto"
  | MxPx => "mx-px"
  | MinusMx1 => "-mx-1"
  | MinusMx2 => "-mx-2"
  | MinusMx3 => "-mx-3"
  | MinusMx4 => "-mx-4"
  | MinusMx5 => "-mx-5"
  | MinusMx6 => "-mx-6"
  | MinusMx8 => "-mx-8"
  | MinusMx10 => "-mx-10"
  | MinusMx12 => "-mx-12"
  | MinusMx16 => "-mx-16"
  | MinusMx20 => "-mx-20"
  | MinusMx24 => "-mx-24"
  | MinusMx32 => "-mx-32"
  | MinusMx40 => "-mx-40"
  | MinusMx48 => "-mx-48"
  | MinusMx56 => "-mx-56"
  | MinusMx64 => "-mx-64"
  | MinusMxPx => "-mx-px"
  | Mt0 => "mt-0"
  | Mt1 => "mt-1"
  | Mt2 => "mt-2"
  | Mt3 => "mt-3"
  | Mt4 => "mt-4"
  | Mt5 => "mt-5"
  | Mt6 => "mt-6"
  | Mt8 => "mt-8"
  | Mt10 => "mt-10"
  | Mt12 => "mt-12"
  | Mt16 => "mt-16"
  | Mt20 => "mt-20"
  | Mt24 => "mt-24"
  | Mt32 => "mt-32"
  | Mt40 => "mt-40"
  | Mt48 => "mt-48"
  | Mt56 => "mt-56"
  | Mt64 => "mt-64"
  | MtAuto => "mt-auto"
  | MtPx => "mt-px"
  | MinusMt1 => "-mt-1"
  | MinusMt2 => "-mt-2"
  | MinusMt3 => "-mt-3"
  | MinusMt4 => "-mt-4"
  | MinusMt5 => "-mt-5"
  | MinusMt6 => "-mt-6"
  | MinusMt8 => "-mt-8"
  | MinusMt10 => "-mt-10"
  | MinusMt12 => "-mt-12"
  | MinusMt16 => "-mt-16"
  | MinusMt20 => "-mt-20"
  | MinusMt24 => "-mt-24"
  | MinusMt32 => "-mt-32"
  | MinusMt40 => "-mt-40"
  | MinusMt48 => "-mt-48"
  | MinusMt56 => "-mt-56"
  | MinusMt64 => "-mt-64"
  | MinusMtPx => "-mt-px"
  | Mr0 => "mr-0"
  | Mr1 => "mr-1"
  | Mr2 => "mr-2"
  | Mr3 => "mr-3"
  | Mr4 => "mr-4"
  | Mr5 => "mr-5"
  | Mr6 => "mr-6"
  | Mr8 => "mr-8"
  | Mr10 => "mr-10"
  | Mr12 => "mr-12"
  | Mr16 => "mr-16"
  | Mr20 => "mr-20"
  | Mr24 => "mr-24"
  | Mr32 => "mr-32"
  | Mr40 => "mr-40"
  | Mr48 => "mr-48"
  | Mr56 => "mr-56"
  | Mr64 => "mr-64"
  | MrAuto => "mr-auto"
  | MrPx => "mr-px"
  | MinusMr1 => "-mr-1"
  | MinusMr2 => "-mr-2"
  | MinusMr3 => "-mr-3"
  | MinusMr4 => "-mr-4"
  | MinusMr5 => "-mr-5"
  | MinusMr6 => "-mr-6"
  | MinusMr8 => "-mr-8"
  | MinusMr10 => "-mr-10"
  | MinusMr12 => "-mr-12"
  | MinusMr16 => "-mr-16"
  | MinusMr20 => "-mr-20"
  | MinusMr24 => "-mr-24"
  | MinusMr32 => "-mr-32"
  | MinusMr40 => "-mr-40"
  | MinusMr48 => "-mr-48"
  | MinusMr56 => "-mr-56"
  | MinusMr64 => "-mr-64"
  | MinusMrPx => "-mr-px"
  | Mb0 => "mb-0"
  | Mb1 => "mb-1"
  | Mb2 => "mb-2"
  | Mb3 => "mb-3"
  | Mb4 => "mb-4"
  | Mb5 => "mb-5"
  | Mb6 => "mb-6"
  | Mb8 => "mb-8"
  | Mb10 => "mb-10"
  | Mb12 => "mb-12"
  | Mb16 => "mb-16"
  | Mb20 => "mb-20"
  | Mb24 => "mb-24"
  | Mb32 => "mb-32"
  | Mb40 => "mb-40"
  | Mb48 => "mb-48"
  | Mb56 => "mb-56"
  | Mb64 => "mb-64"
  | MbAuto => "mb-auto"
  | MbPx => "mb-px"
  | MinusMb1 => "-mb-1"
  | MinusMb2 => "-mb-2"
  | MinusMb3 => "-mb-3"
  | MinusMb4 => "-mb-4"
  | MinusMb5 => "-mb-5"
  | MinusMb6 => "-mb-6"
  | MinusMb8 => "-mb-8"
  | MinusMb10 => "-mb-10"
  | MinusMb12 => "-mb-12"
  | MinusMb16 => "-mb-16"
  | MinusMb20 => "-mb-20"
  | MinusMb24 => "-mb-24"
  | MinusMb32 => "-mb-32"
  | MinusMb40 => "-mb-40"
  | MinusMb48 => "-mb-48"
  | MinusMb56 => "-mb-56"
  | MinusMb64 => "-mb-64"
  | MinusMbPx => "-mb-px"
  | Ml0 => "ml-0"
  | Ml1 => "ml-1"
  | Ml2 => "ml-2"
  | Ml3 => "ml-3"
  | Ml4 => "ml-4"
  | Ml5 => "ml-5"
  | Ml6 => "ml-6"
  | Ml8 => "ml-8"
  | Ml10 => "ml-10"
  | Ml12 => "ml-12"
  | Ml16 => "ml-16"
  | Ml20 => "ml-20"
  | Ml24 => "ml-24"
  | Ml32 => "ml-32"
  | Ml40 => "ml-40"
  | Ml48 => "ml-48"
  | Ml56 => "ml-56"
  | Ml64 => "ml-64"
  | MlAuto => "ml-auto"
  | MlPx => "ml-px"
  | MinusMl1 => "-ml-1"
  | MinusMl2 => "-ml-2"
  | MinusMl3 => "-ml-3"
  | MinusMl4 => "-ml-4"
  | MinusMl5 => "-ml-5"
  | MinusMl6 => "-ml-6"
  | MinusMl8 => "-ml-8"
  | MinusMl10 => "-ml-10"
  | MinusMl12 => "-ml-12"
  | MinusMl16 => "-ml-16"
  | MinusMl20 => "-ml-20"
  | MinusMl24 => "-ml-24"
  | MinusMl32 => "-ml-32"
  | MinusMl40 => "-ml-40"
  | MinusMl48 => "-ml-48"
  | MinusMl56 => "-ml-56"
  | MinusMl64 => "-ml-64"
  | MinusMlPx => "-ml-px";

/* BoxShadow */

type boxShadow =
  | Shadow
  | ShadowMd
  | ShadowLg
  | ShadowXl
  | Shadow2xl
  | ShadowInner
  | ShadowOutline
  | ShadowNone;

let boxShadowToJs =
  fun
  | Shadow => "shadow"
  | ShadowMd => "shadow-md"
  | ShadowLg => "shadow-lg"
  | ShadowXl => "shadow-xl"
  | Shadow2xl => "shadow-2xl"
  | ShadowInner => "shadow-inner"
  | ShadowOutline => "shadow-outline"
  | ShadowNone => "shadow-none";

/* LetterSpacing */

type letterSpacing =
  | TrackingTighter
  | TrackingTight
  | TrackingNormal
  | TrackingWide
  | TrackingWider
  | TrackingWidest;

let letterSpacingToJs =
  fun
  | TrackingTighter => "tracking-tighter"
  | TrackingTight => "tracking-tight"
  | TrackingNormal => "tracking-normal"
  | TrackingWide => "tracking-wide"
  | TrackingWider => "tracking-wider"
  | TrackingWidest => "tracking-widest";

/* MaxWidth */

type maxWidth =
  | MaxWXs
  | MaxWSm
  | MaxWMd
  | MaxWLg
  | MaxWXl
  | MaxW2xl
  | MaxW3xl
  | MaxW4xl
  | MaxW5xl
  | MaxW6xl
  | MaxWFull;

let maxWidthToJs =
  fun
  | MaxWXs => "max-w-xs"
  | MaxWSm => "max-w-sm"
  | MaxWMd => "max-w-md"
  | MaxWLg => "max-w-lg"
  | MaxWXl => "max-w-xl"
  | MaxW2xl => "max-w-2xl"
  | MaxW3xl => "max-w-3xl"
  | MaxW4xl => "max-w-4xl"
  | MaxW5xl => "max-w-5xl"
  | MaxW6xl => "max-w-6xl"
  | MaxWFull => "max-w-full";

/* AppearanceNone */

type appearanceNone = string;

let appearanceNoneToJs = () => "appearance-none";

/* AlignItems */

type alignItems =
  | ItemsStretch
  | ItemsStart
  | ItemsCenter
  | ItemsEnd
  | ItemsBaseline;

let alignItemsToJs =
  fun
  | ItemsStretch => "items-stretch"
  | ItemsStart => "items-start"
  | ItemsCenter => "items-center"
  | ItemsEnd => "items-end"
  | ItemsBaseline => "items-baseline";

/* Opacity */

type opacity =
  | Opacity100
  | Opacity75
  | Opacity50
  | Opacity25
  | Opacity0;

let opacityToJs =
  fun
  | Opacity100 => "opacity-100"
  | Opacity75 => "opacity-75"
  | Opacity50 => "opacity-50"
  | Opacity25 => "opacity-25"
  | Opacity0 => "opacity-0";

/* MinHeight */

type minHeight =
  | MinH0
  | MinHFull
  | MinHScreen;

let minHeightToJs =
  fun
  | MinH0 => "min-h-0"
  | MinHFull => "min-h-full"
  | MinHScreen => "min-h-screen";

/* UserSelect */

type userSelect =
  | SelectNone
  | SelectText
  | SelectAll
  | SelectAuto;

let userSelectToJs =
  fun
  | SelectNone => "select-none"
  | SelectText => "select-text"
  | SelectAll => "select-all"
  | SelectAuto => "select-auto";

/* BackgroundAttachment */

type backgroundAttachment =
  | BgFixed
  | BgLocal
  | BgScroll;

let backgroundAttachmentToJs =
  fun
  | BgFixed => "bg-fixed"
  | BgLocal => "bg-local"
  | BgScroll => "bg-scroll";

/* TextAlign */

type textAlign =
  | TextLeft
  | TextCenter
  | TextRight
  | TextJustify;

let textAlignToJs =
  fun
  | TextLeft => "text-left"
  | TextCenter => "text-center"
  | TextRight => "text-right"
  | TextJustify => "text-justify";

/* WordBreak */

type wordBreak =
  | BreakNormal
  | BreakWords
  | BreakAll
  | Truncate;

let wordBreakToJs =
  fun
  | BreakNormal => "break-normal"
  | BreakWords => "break-words"
  | BreakAll => "break-all"
  | Truncate => "truncate";

/* ListStylePosition */

type listStylePosition =
  | ListInside
  | ListOutside;

let listStylePositionToJs =
  fun
  | ListInside => "list-inside"
  | ListOutside => "list-outside";

/* BorderRadius */

type borderRadius =
  | RoundedNone
  | RoundedSm
  | Rounded
  | RoundedLg
  | RoundedFull
  | RoundedTNone
  | RoundedRNone
  | RoundedBNone
  | RoundedLNone
  | RoundedTSm
  | RoundedRSm
  | RoundedBSm
  | RoundedLSm
  | RoundedT
  | RoundedR
  | RoundedB
  | RoundedL
  | RoundedTLg
  | RoundedRLg
  | RoundedBLg
  | RoundedLLg
  | RoundedTFull
  | RoundedRFull
  | RoundedBFull
  | RoundedLFull
  | RoundedTlNone
  | RoundedTrNone
  | RoundedBrNone
  | RoundedBlNone
  | RoundedTlSm
  | RoundedTrSm
  | RoundedBrSm
  | RoundedBlSm
  | RoundedTl
  | RoundedTr
  | RoundedBr
  | RoundedBl
  | RoundedTlLg
  | RoundedTrLg
  | RoundedBrLg
  | RoundedBlLg
  | RoundedTlFull
  | RoundedTrFull
  | RoundedBrFull
  | RoundedBlFull;

let borderRadiusToJs =
  fun
  | RoundedNone => "rounded-none"
  | RoundedSm => "rounded-sm"
  | Rounded => "rounded"
  | RoundedLg => "rounded-lg"
  | RoundedFull => "rounded-full"
  | RoundedTNone => "rounded-t-none"
  | RoundedRNone => "rounded-r-none"
  | RoundedBNone => "rounded-b-none"
  | RoundedLNone => "rounded-l-none"
  | RoundedTSm => "rounded-t-sm"
  | RoundedRSm => "rounded-r-sm"
  | RoundedBSm => "rounded-b-sm"
  | RoundedLSm => "rounded-l-sm"
  | RoundedT => "rounded-t"
  | RoundedR => "rounded-r"
  | RoundedB => "rounded-b"
  | RoundedL => "rounded-l"
  | RoundedTLg => "rounded-t-lg"
  | RoundedRLg => "rounded-r-lg"
  | RoundedBLg => "rounded-b-lg"
  | RoundedLLg => "rounded-l-lg"
  | RoundedTFull => "rounded-t-full"
  | RoundedRFull => "rounded-r-full"
  | RoundedBFull => "rounded-b-full"
  | RoundedLFull => "rounded-l-full"
  | RoundedTlNone => "rounded-tl-none"
  | RoundedTrNone => "rounded-tr-none"
  | RoundedBrNone => "rounded-br-none"
  | RoundedBlNone => "rounded-bl-none"
  | RoundedTlSm => "rounded-tl-sm"
  | RoundedTrSm => "rounded-tr-sm"
  | RoundedBrSm => "rounded-br-sm"
  | RoundedBlSm => "rounded-bl-sm"
  | RoundedTl => "rounded-tl"
  | RoundedTr => "rounded-tr"
  | RoundedBr => "rounded-br"
  | RoundedBl => "rounded-bl"
  | RoundedTlLg => "rounded-tl-lg"
  | RoundedTrLg => "rounded-tr-lg"
  | RoundedBrLg => "rounded-br-lg"
  | RoundedBlLg => "rounded-bl-lg"
  | RoundedTlFull => "rounded-tl-full"
  | RoundedTrFull => "rounded-tr-full"
  | RoundedBrFull => "rounded-br-full"
  | RoundedBlFull => "rounded-bl-full";

/* BackgroundSize */

type backgroundSize =
  | BgAuto
  | BgCover
  | BgContain;

let backgroundSizeToJs =
  fun
  | BgAuto => "bg-auto"
  | BgCover => "bg-cover"
  | BgContain => "bg-contain";

/* BorderWidth */

type borderWidth =
  | Border
  | Border0
  | Border2
  | Border4
  | Border8
  | BorderT
  | BorderR
  | BorderB
  | BorderL
  | BorderT0
  | BorderR0
  | BorderB0
  | BorderL0
  | BorderT2
  | BorderR2
  | BorderB2
  | BorderL2
  | BorderT4
  | BorderR4
  | BorderB4
  | BorderL4
  | BorderT8
  | BorderR8
  | BorderB8
  | BorderL8;

let borderWidthToJs =
  fun
  | Border => "border"
  | Border0 => "border-0"
  | Border2 => "border-2"
  | Border4 => "border-4"
  | Border8 => "border-8"
  | BorderT => "border-t"
  | BorderR => "border-r"
  | BorderB => "border-b"
  | BorderL => "border-l"
  | BorderT0 => "border-t-0"
  | BorderR0 => "border-r-0"
  | BorderB0 => "border-b-0"
  | BorderL0 => "border-l-0"
  | BorderT2 => "border-t-2"
  | BorderR2 => "border-r-2"
  | BorderB2 => "border-b-2"
  | BorderL2 => "border-l-2"
  | BorderT4 => "border-t-4"
  | BorderR4 => "border-r-4"
  | BorderB4 => "border-b-4"
  | BorderL4 => "border-l-4"
  | BorderT8 => "border-t-8"
  | BorderR8 => "border-r-8"
  | BorderB8 => "border-b-8"
  | BorderL8 => "border-l-8";

/* FlexDirection */

type flexDirection =
  | FlexRow
  | FlexRowReverse
  | FlexCol
  | FlexColReverse;

let flexDirectionToJs =
  fun
  | FlexRow => "flex-row"
  | FlexRowReverse => "flex-row-reverse"
  | FlexCol => "flex-col"
  | FlexColReverse => "flex-col-reverse";

/* Placement */

type placement =
  | Inset0
  | InsetY0
  | InsetX0
  | Top0
  | Right0
  | Bottom0
  | Left0
  | InsetAuto;

let placementToJs =
  fun
  | Inset0 => "inset-0"
  | InsetY0 => "inset-y-0"
  | InsetX0 => "inset-x-0"
  | Top0 => "top-0"
  | Right0 => "right-0"
  | Bottom0 => "bottom-0"
  | Left0 => "left-0"
  | InsetAuto => "inset-auto";

/* Display */

type display =
  | Block
  | InlineBlock
  | Inline
  | Flex
  | InlineFlex
  | Table
  | TableRow
  | TableCell
  | Hidden;

let displayToJs =
  fun
  | Block => "block"
  | InlineBlock => "inline-block"
  | Inline => "inline"
  | Flex => "flex"
  | InlineFlex => "inline-flex"
  | Table => "table"
  | TableRow => "table-row"
  | TableCell => "table-cell"
  | Hidden => "hidden";

/* LineHeight */

type lineHeight =
  | LeadingNone
  | LeadingTight
  | LeadingSnug
  | LeadingNormal
  | LeadingRelaxed
  | LeadingLoose;

let lineHeightToJs =
  fun
  | LeadingNone => "leading-none"
  | LeadingTight => "leading-tight"
  | LeadingSnug => "leading-snug"
  | LeadingNormal => "leading-normal"
  | LeadingRelaxed => "leading-relaxed"
  | LeadingLoose => "leading-loose";

/* PointerEvent */

type pointerEvent =
  | PointerEventsNone
  | PointerEventsAuto;

let pointerEventToJs =
  fun
  | PointerEventsNone => "pointer-events-none"
  | PointerEventsAuto => "pointer-events-auto";

/* PlaceholderColor */

type placeholderColor =
  | PlaceholderTransparent
  | PlaceholderBlack
  | PlaceholderWhite
  | PlaceholderGray100
  | PlaceholderGray200
  | PlaceholderGray300
  | PlaceholderGray400
  | PlaceholderGray500
  | PlaceholderGray600
  | PlaceholderGray700
  | PlaceholderGray800
  | PlaceholderGray900
  | PlaceholderRed100
  | PlaceholderRed200
  | PlaceholderRed300
  | PlaceholderRed400
  | PlaceholderRed500
  | PlaceholderRed600
  | PlaceholderRed700
  | PlaceholderRed800
  | PlaceholderRed900
  | PlaceholderOrange100
  | PlaceholderOrange200
  | PlaceholderOrange300
  | PlaceholderOrange400
  | PlaceholderOrange500
  | PlaceholderOrange600
  | PlaceholderOrange700
  | PlaceholderOrange800
  | PlaceholderOrange900
  | PlaceholderYellow100
  | PlaceholderYellow200
  | PlaceholderYellow300
  | PlaceholderYellow400
  | PlaceholderYellow500
  | PlaceholderYellow600
  | PlaceholderYellow700
  | PlaceholderYellow800
  | PlaceholderYellow900
  | PlaceholderGreen100
  | PlaceholderGreen200
  | PlaceholderGreen300
  | PlaceholderGreen400
  | PlaceholderGreen500
  | PlaceholderGreen600
  | PlaceholderGreen700
  | PlaceholderGreen800
  | PlaceholderGreen900
  | PlaceholderTeal100
  | PlaceholderTeal200
  | PlaceholderTeal300
  | PlaceholderTeal400
  | PlaceholderTeal500
  | PlaceholderTeal600
  | PlaceholderTeal700
  | PlaceholderTeal800
  | PlaceholderTeal900
  | PlaceholderBlue100
  | PlaceholderBlue200
  | PlaceholderBlue300
  | PlaceholderBlue400
  | PlaceholderBlue500
  | PlaceholderBlue600
  | PlaceholderBlue700
  | PlaceholderBlue800
  | PlaceholderBlue900
  | PlaceholderIndigo100
  | PlaceholderIndigo200
  | PlaceholderIndigo300
  | PlaceholderIndigo400
  | PlaceholderIndigo500
  | PlaceholderIndigo600
  | PlaceholderIndigo700
  | PlaceholderIndigo800
  | PlaceholderIndigo900
  | PlaceholderPurple100
  | PlaceholderPurple200
  | PlaceholderPurple300
  | PlaceholderPurple400
  | PlaceholderPurple500
  | PlaceholderPurple600
  | PlaceholderPurple700
  | PlaceholderPurple800
  | PlaceholderPurple900
  | PlaceholderPink100
  | PlaceholderPink200
  | PlaceholderPink300
  | PlaceholderPink400
  | PlaceholderPink500
  | PlaceholderPink600
  | PlaceholderPink700
  | PlaceholderPink800
  | PlaceholderPink900;

let placeholderColorToJs =
  fun
  | PlaceholderTransparent => "placeholder-transparent"
  | PlaceholderBlack => "placeholder-black"
  | PlaceholderWhite => "placeholder-white"
  | PlaceholderGray100 => "placeholder-gray-100"
  | PlaceholderGray200 => "placeholder-gray-200"
  | PlaceholderGray300 => "placeholder-gray-300"
  | PlaceholderGray400 => "placeholder-gray-400"
  | PlaceholderGray500 => "placeholder-gray-500"
  | PlaceholderGray600 => "placeholder-gray-600"
  | PlaceholderGray700 => "placeholder-gray-700"
  | PlaceholderGray800 => "placeholder-gray-800"
  | PlaceholderGray900 => "placeholder-gray-900"
  | PlaceholderRed100 => "placeholder-red-100"
  | PlaceholderRed200 => "placeholder-red-200"
  | PlaceholderRed300 => "placeholder-red-300"
  | PlaceholderRed400 => "placeholder-red-400"
  | PlaceholderRed500 => "placeholder-red-500"
  | PlaceholderRed600 => "placeholder-red-600"
  | PlaceholderRed700 => "placeholder-red-700"
  | PlaceholderRed800 => "placeholder-red-800"
  | PlaceholderRed900 => "placeholder-red-900"
  | PlaceholderOrange100 => "placeholder-orange-100"
  | PlaceholderOrange200 => "placeholder-orange-200"
  | PlaceholderOrange300 => "placeholder-orange-300"
  | PlaceholderOrange400 => "placeholder-orange-400"
  | PlaceholderOrange500 => "placeholder-orange-500"
  | PlaceholderOrange600 => "placeholder-orange-600"
  | PlaceholderOrange700 => "placeholder-orange-700"
  | PlaceholderOrange800 => "placeholder-orange-800"
  | PlaceholderOrange900 => "placeholder-orange-900"
  | PlaceholderYellow100 => "placeholder-yellow-100"
  | PlaceholderYellow200 => "placeholder-yellow-200"
  | PlaceholderYellow300 => "placeholder-yellow-300"
  | PlaceholderYellow400 => "placeholder-yellow-400"
  | PlaceholderYellow500 => "placeholder-yellow-500"
  | PlaceholderYellow600 => "placeholder-yellow-600"
  | PlaceholderYellow700 => "placeholder-yellow-700"
  | PlaceholderYellow800 => "placeholder-yellow-800"
  | PlaceholderYellow900 => "placeholder-yellow-900"
  | PlaceholderGreen100 => "placeholder-green-100"
  | PlaceholderGreen200 => "placeholder-green-200"
  | PlaceholderGreen300 => "placeholder-green-300"
  | PlaceholderGreen400 => "placeholder-green-400"
  | PlaceholderGreen500 => "placeholder-green-500"
  | PlaceholderGreen600 => "placeholder-green-600"
  | PlaceholderGreen700 => "placeholder-green-700"
  | PlaceholderGreen800 => "placeholder-green-800"
  | PlaceholderGreen900 => "placeholder-green-900"
  | PlaceholderTeal100 => "placeholder-teal-100"
  | PlaceholderTeal200 => "placeholder-teal-200"
  | PlaceholderTeal300 => "placeholder-teal-300"
  | PlaceholderTeal400 => "placeholder-teal-400"
  | PlaceholderTeal500 => "placeholder-teal-500"
  | PlaceholderTeal600 => "placeholder-teal-600"
  | PlaceholderTeal700 => "placeholder-teal-700"
  | PlaceholderTeal800 => "placeholder-teal-800"
  | PlaceholderTeal900 => "placeholder-teal-900"
  | PlaceholderBlue100 => "placeholder-blue-100"
  | PlaceholderBlue200 => "placeholder-blue-200"
  | PlaceholderBlue300 => "placeholder-blue-300"
  | PlaceholderBlue400 => "placeholder-blue-400"
  | PlaceholderBlue500 => "placeholder-blue-500"
  | PlaceholderBlue600 => "placeholder-blue-600"
  | PlaceholderBlue700 => "placeholder-blue-700"
  | PlaceholderBlue800 => "placeholder-blue-800"
  | PlaceholderBlue900 => "placeholder-blue-900"
  | PlaceholderIndigo100 => "placeholder-indigo-100"
  | PlaceholderIndigo200 => "placeholder-indigo-200"
  | PlaceholderIndigo300 => "placeholder-indigo-300"
  | PlaceholderIndigo400 => "placeholder-indigo-400"
  | PlaceholderIndigo500 => "placeholder-indigo-500"
  | PlaceholderIndigo600 => "placeholder-indigo-600"
  | PlaceholderIndigo700 => "placeholder-indigo-700"
  | PlaceholderIndigo800 => "placeholder-indigo-800"
  | PlaceholderIndigo900 => "placeholder-indigo-900"
  | PlaceholderPurple100 => "placeholder-purple-100"
  | PlaceholderPurple200 => "placeholder-purple-200"
  | PlaceholderPurple300 => "placeholder-purple-300"
  | PlaceholderPurple400 => "placeholder-purple-400"
  | PlaceholderPurple500 => "placeholder-purple-500"
  | PlaceholderPurple600 => "placeholder-purple-600"
  | PlaceholderPurple700 => "placeholder-purple-700"
  | PlaceholderPurple800 => "placeholder-purple-800"
  | PlaceholderPurple900 => "placeholder-purple-900"
  | PlaceholderPink100 => "placeholder-pink-100"
  | PlaceholderPink200 => "placeholder-pink-200"
  | PlaceholderPink300 => "placeholder-pink-300"
  | PlaceholderPink400 => "placeholder-pink-400"
  | PlaceholderPink500 => "placeholder-pink-500"
  | PlaceholderPink600 => "placeholder-pink-600"
  | PlaceholderPink700 => "placeholder-pink-700"
  | PlaceholderPink800 => "placeholder-pink-800"
  | PlaceholderPink900 => "placeholder-pink-900";

/* FlexGrow */

type flexGrow =
  | FlexGrow
  | FlexGrow0;

let flexGrowToJs =
  fun
  | FlexGrow => "flex-grow"
  | FlexGrow0 => "flex-grow-0";

/* Height */

type height =
  | H0
  | H1
  | H2
  | H3
  | H4
  | H5
  | H6
  | H8
  | H10
  | H12
  | H16
  | H20
  | H24
  | H32
  | H40
  | H48
  | H56
  | H64
  | HAuto
  | HPx
  | HFull
  | HScreen;

let heightToJs =
  fun
  | H0 => "h-0"
  | H1 => "h-1"
  | H2 => "h-2"
  | H3 => "h-3"
  | H4 => "h-4"
  | H5 => "h-5"
  | H6 => "h-6"
  | H8 => "h-8"
  | H10 => "h-10"
  | H12 => "h-12"
  | H16 => "h-16"
  | H20 => "h-20"
  | H24 => "h-24"
  | H32 => "h-32"
  | H40 => "h-40"
  | H48 => "h-48"
  | H56 => "h-56"
  | H64 => "h-64"
  | HAuto => "h-auto"
  | HPx => "h-px"
  | HFull => "h-full"
  | HScreen => "h-screen";

/* MinWidth */

type minWidth =
  | MinW0
  | MinWFull;

let minWidthToJs =
  fun
  | MinW0 => "min-w-0"
  | MinWFull => "min-w-full";

/* FontSize */

type fontSize =
  | TextXs
  | TextSm
  | TextBase
  | TextLg
  | TextXl
  | Text2xl
  | Text3xl
  | Text4xl
  | Text5xl
  | Text6xl;

let fontSizeToJs =
  fun
  | TextXs => "text-xs"
  | TextSm => "text-sm"
  | TextBase => "text-base"
  | TextLg => "text-lg"
  | TextXl => "text-xl"
  | Text2xl => "text-2xl"
  | Text3xl => "text-3xl"
  | Text4xl => "text-4xl"
  | Text5xl => "text-5xl"
  | Text6xl => "text-6xl";

/* AlignSelf */

type alignSelf =
  | SelfAuto
  | SelfStart
  | SelfCenter
  | SelfEnd
  | SelfStretch;

let alignSelfToJs =
  fun
  | SelfAuto => "self-auto"
  | SelfStart => "self-start"
  | SelfCenter => "self-center"
  | SelfEnd => "self-end"
  | SelfStretch => "self-stretch";

/* TW */

type t =
  | ZIndex(zIndex)
  | BorderCollapse(borderCollapse)
  | BackgroundPosition(backgroundPosition)
  | Float(float)
  | Flex(flex)
  | VerticalAlign(verticalAlign)
  | BorderStyle(borderStyle)
  | FillCurrent
  | Visibility(visibility)
  | OutlineNone
  | Padding(padding)
  | StrokeCurrent
  | TextColor(textColor)
  | AlignContent(alignContent)
  | ListStyleType(listStyleType)
  | FontStyle(fontStyle)
  | Cursor(cursor)
  | TableLayout(tableLayout)
  | FontWeight(fontWeight)
  | BackgroundRepeat(backgroundRepeat)
  | JustifyContent(justifyContent)
  | Overflow(overflow)
  | MaxHeight(maxHeight)
  | Container
  | BorderColor(borderColor)
  | ObjectFit(objectFit)
  | Position(position)
  | FlexWrap(flexWrap)
  | FlexShrink(flexShrink)
  | Width(width)
  | FontSmoothing(fontSmoothing)
  | TextDecoration(textDecoration)
  | TextTransform(textTransform)
  | ObjectPosition(objectPosition)
  | Order(order)
  | Resize(resize)
  | FontFamily(fontFamily)
  | BackgroundColor(backgroundColor)
  | Whitespace(whitespace)
  | Margin(margin)
  | BoxShadow(boxShadow)
  | LetterSpacing(letterSpacing)
  | MaxWidth(maxWidth)
  | AppearanceNone
  | AlignItems(alignItems)
  | Opacity(opacity)
  | MinHeight(minHeight)
  | UserSelect(userSelect)
  | BackgroundAttachment(backgroundAttachment)
  | TextAlign(textAlign)
  | WordBreak(wordBreak)
  | ListStylePosition(listStylePosition)
  | BorderRadius(borderRadius)
  | BackgroundSize(backgroundSize)
  | BorderWidth(borderWidth)
  | FlexDirection(flexDirection)
  | Placement(placement)
  | Display(display)
  | LineHeight(lineHeight)
  | PointerEvent(pointerEvent)
  | PlaceholderColor(placeholderColor)
  | FlexGrow(flexGrow)
  | Height(height)
  | MinWidth(minWidth)
  | FontSize(fontSize)
  | AlignSelf(alignSelf);

let tToJs =
  fun
  | ZIndex(v) => zIndexToJs(v)
  | BorderCollapse(v) => borderCollapseToJs(v)
  | BackgroundPosition(v) => backgroundPositionToJs(v)
  | Float(v) => floatToJs(v)
  | Flex(v) => flexToJs(v)
  | VerticalAlign(v) => verticalAlignToJs(v)
  | BorderStyle(v) => borderStyleToJs(v)
  | FillCurrent => fillCurrentToJs()
  | Visibility(v) => visibilityToJs(v)
  | OutlineNone => outlineNoneToJs()
  | Padding(v) => paddingToJs(v)
  | StrokeCurrent => strokeCurrentToJs()
  | TextColor(v) => textColorToJs(v)
  | AlignContent(v) => alignContentToJs(v)
  | ListStyleType(v) => listStyleTypeToJs(v)
  | FontStyle(v) => fontStyleToJs(v)
  | Cursor(v) => cursorToJs(v)
  | TableLayout(v) => tableLayoutToJs(v)
  | FontWeight(v) => fontWeightToJs(v)
  | BackgroundRepeat(v) => backgroundRepeatToJs(v)
  | JustifyContent(v) => justifyContentToJs(v)
  | Overflow(v) => overflowToJs(v)
  | MaxHeight(v) => maxHeightToJs(v)
  | Container => containerToJs()
  | BorderColor(v) => borderColorToJs(v)
  | ObjectFit(v) => objectFitToJs(v)
  | Position(v) => positionToJs(v)
  | FlexWrap(v) => flexWrapToJs(v)
  | FlexShrink(v) => flexShrinkToJs(v)
  | Width(v) => widthToJs(v)
  | FontSmoothing(v) => fontSmoothingToJs(v)
  | TextDecoration(v) => textDecorationToJs(v)
  | TextTransform(v) => textTransformToJs(v)
  | ObjectPosition(v) => objectPositionToJs(v)
  | Order(v) => orderToJs(v)
  | Resize(v) => resizeToJs(v)
  | FontFamily(v) => fontFamilyToJs(v)
  | BackgroundColor(v) => backgroundColorToJs(v)
  | Whitespace(v) => whitespaceToJs(v)
  | Margin(v) => marginToJs(v)
  | BoxShadow(v) => boxShadowToJs(v)
  | LetterSpacing(v) => letterSpacingToJs(v)
  | MaxWidth(v) => maxWidthToJs(v)
  | AppearanceNone => appearanceNoneToJs()
  | AlignItems(v) => alignItemsToJs(v)
  | Opacity(v) => opacityToJs(v)
  | MinHeight(v) => minHeightToJs(v)
  | UserSelect(v) => userSelectToJs(v)
  | BackgroundAttachment(v) => backgroundAttachmentToJs(v)
  | TextAlign(v) => textAlignToJs(v)
  | WordBreak(v) => wordBreakToJs(v)
  | ListStylePosition(v) => listStylePositionToJs(v)
  | BorderRadius(v) => borderRadiusToJs(v)
  | BackgroundSize(v) => backgroundSizeToJs(v)
  | BorderWidth(v) => borderWidthToJs(v)
  | FlexDirection(v) => flexDirectionToJs(v)
  | Placement(v) => placementToJs(v)
  | Display(v) => displayToJs(v)
  | LineHeight(v) => lineHeightToJs(v)
  | PointerEvent(v) => pointerEventToJs(v)
  | PlaceholderColor(v) => placeholderColorToJs(v)
  | FlexGrow(v) => flexGrowToJs(v)
  | Height(v) => heightToJs(v)
  | MinWidth(v) => minWidthToJs(v)
  | FontSize(v) => fontSizeToJs(v)
  | AlignSelf(v) => alignSelfToJs(v);

let make =
  List.fold_left((result, style) => result ++ " " ++ tToJs(style), "");
