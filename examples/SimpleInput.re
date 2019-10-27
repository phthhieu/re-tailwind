let str = ReasonReact.string;

[@react.component]
let make = () => {
  <div className=TW.([MaxWidth(MaxWSm), Margin(MxAuto)] |> make)>
    <p
      className=TW.(
        [FontSize(TextSm), Margin(Mb2), TextColor(TextGray600)] |> make
      )>
      {str("Simple form input component")}
    </p>
    <input
      className=TW.(
        [
          BackgroundColor(BgWhite),
          BorderWidth(Border),
          BorderColor(BorderGray300),
          BorderRadius(RoundedLg),
          Padding(Py2),
          Padding(Px4),
          Display(Block),
          Width(WFull),
          AppearanceNone,
          LineHeight(LeadingNormal),
        ]
        |> make
      )
      placeholder="jane@example.com"
    />
  </div>;
};
