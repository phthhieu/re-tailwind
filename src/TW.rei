
type container = string;

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

type float =
  | FloatRight
  | FloatLeft
  | FloatNone
  | Clearfix;

type objectFit =
  | ObjectContain
  | ObjectCover
  | ObjectFill
  | ObjectNone
  | ObjectScaleDown;

type t =
  | Container
  | Display(display)
  | Float(float)
  | ObjectFit(objectFit);

let make: list(t) => string;
