[%bs.raw {|require("tailwindcss/dist/tailwind.min.css")|}];

module Example = {
  [@react.component]
  let make = () => {
    <div className=TW.([Display(Flex)] |> make)>
      <SimpleInput />
      <Navigation />
    </div>;
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "root");
