let str = ReasonReact.string;

[@react.component]
let make = () => {
  <div
    className=TW.(
      [
        Width(W10),
        Height(H10),
        BackgroundColor(BgRed500),
        Sm(BackgroundColor(BgGreen500)),
        Lg(BackgroundColor(BgPink500)),
        Xl(BackgroundColor(BgTeal500)),
      ]
      |> make
    )
  />;
};
