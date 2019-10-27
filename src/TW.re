/* Container */
type container = string;

let containerToJs = () => "container";

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

/* TW */

type t =
  | Container
  | Display(display)
  | Float(float)
  | ObjectFit(objectFit);

let tToJs =
  fun
  | Container => containerToJs()
  | Display(d) => displayToJs(d)
  | Float(f) => floatToJs(f)
  | ObjectFit(f) => objectFitToJs(f);

let make =
  List.fold_left((result, style) => result ++ " " ++ tToJs(style), "");
