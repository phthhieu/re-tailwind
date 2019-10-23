[%bs.raw {|require("tailwindcss/dist/tailwind.min.css")|}];

module Example = {
  [@react.component]
  let make = () => {
    let twClassNames = {
      TW.([Display(Flex), Float(FloatRight)] |> make);
    };
    <div className=twClassNames> {ReasonReact.string("Hello Example")} </div>;
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "root");
