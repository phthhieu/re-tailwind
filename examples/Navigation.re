let str = ReasonReact.string;

[@react.component]
let make = () => {
  <ul className=TW.([Display(Flex)] |> make)>
    <li className=TW.([Margin(Mr6)] |> make)>
      <a href="#" className=TW.([TextColor(TextBlue500)] |> make)>
        {str("Active")}
      </a>
    </li>
    <li className=TW.([Margin(Mr6)] |> make)>
      <a href="#" className=TW.([TextColor(TextBlue500)] |> make)>
        {str("Link")}
      </a>
    </li>
    <li className=TW.([Margin(Mr6)] |> make)>
      <a href="#" className=TW.([TextColor(TextBlue500)] |> make)>
        {str("Link")}
      </a>
    </li>
    <li className=TW.([Margin(Mr6)] |> make)>
      <a
        href="#"
        className=TW.(
          [TextColor(TextGray400), Cursor(CursorNotAllowed)] |> make
        )>
        {str("Disabled")}
      </a>
    </li>
  </ul>;
};
